<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A datastore interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface DataStore {
  /**
   * Select the specified column from the first matching result in the datastore
   * @param  string $field    The name of the column
   * @return Query    The resulting Query interface
   */
  public function selectColumn(string $field) : Query;
  /**
   * Select the specified fields (or all fields if null) from the datastore
   * @param  ?Vector<string>  $fields=null  The fields to select
   * @return Query    The resulting Query interface
   */
  public function select(?Vector<string> $fields=null) : Query;
  /**
   * Update the matching results in the datastore with the given data
   * @param  Map<string, mixed>   $data   The data to update
   * @return Query    The resulting Query interface
   */
  public function update(Map<string, mixed> $data): Query;
  /**
   * Delete the matching results in the datastore
   * @param  bool $soft=false   Soft delete
   * @return Query    The resulting Query interface
   */
  public function delete(bool $soft = false): Query;
  /**
   * Insert the given data into the datastore
   * @param  Map<string, mixed>   $data   The data to insert
   * @return int      The ID of the inserted row
   */
  public function insert(Map<string, mixed> $data): int;
  /**
   * Filter the datastore with the given parameters
   * @param  string   $field  The field to compare
   * @param  string   $comp   The comparator
   * @param  mixed    $value  The value to compare against
   * @return Query    The resulting Query interface
   */
  public function where(string $field, string $comp, mixed $value): Query;
  /**
   * Filter the datastore with the given sets of parameters
   * @param  KeyedTraversable<string, string>   $array  The sets of parameters to filter by
   * @return Query    The resulting Query interface
   */
  public function whereAll(KeyedTraversable<string, string> $array): Query;
  /**
   * Order the matching results by the given parameters
   * @param  string $field        The field to order by
   * @param  string $direction    The direction to order by
   * @return Query    The resulting Query interface
   */
  public function orderBy(string $field, string $direction): Query;
  /**
   * Limit the matching results by the specified offsets
   * @param  int $min=0   The number of matching elements to bypass
   * @param  int $max=25  The number of matching elements to select
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function limit(int $min = 0, int $max = 25): Query;
  /**
   * Retrieve the first result matching the current query structure
   * @return Awaitable<?Map<string, mixed>>   A Map of the result data or null if none found
   */
  public function first(): ?Map<string, mixed>;
  /**
   * Fetch all of the results matching the current query structure
   * @return Awaitable<?Map<string, mixed>>   A Map of the results or null if none found
   */
  public function fetchAll(): Vector<Map<string, mixed>>;
}
