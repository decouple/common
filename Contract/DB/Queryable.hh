<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */
use Decouple\Common\Contract\Buildable;
/**
 * A queryable interface implemented by classes that are queryable
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Queryable {
/**
 * Select the provided fields, or all fields if none/null provided
 * @param  ?Vector<string> $fields=null   The fields to select
 * @return Query   The adjusted Queryable object
 */
  public function select(?Vector<string> $fields = null): Queryable;
  /**
   * Update the queryable datasource with the given data
   * @param  Map<string, mixed>   $data   The data to update
   * @return Query   The adjusted Queryable object
   */
  public function update(Map<string, mixed> $data): Queryable;
  /**
   * Delete all of the results matching the current query structure
   * @param  bool   $soft=false   Soft Delete
   * @return Query   The adjusted Queryable object
   */
  public function delete(bool $soft = false): Queryable;
  /**
   * Assign the provided filter to the queryable datasource
   * @param  string $field        The field to compare
   * @param  string $comp         The comparator
   * @param  mixed  $value        The value to compare against
   * @return Query   The adjusted Queryable object
   */
  public function where(string $field, string $comp, mixed $value): Queryable;
  /**
   * Assign the provided filter set to the queryable datasource
   * @param  KeyedTraversable<string, string>   $array A traversable collection of filters
   * @return Queryable    The adjusted Queryable object
   */
  public function whereAll(KeyedTraversable<string, string> $array): Queryable;
  /**
   * Order the Queryable datasource by the given parameters
   * @param  string $field        The field to order by
   * @param  string $direction    The direction to order in
   * @return Query   The adjusted Queryable object
   */
  public function orderBy(string $field, string $direction): Queryable;
  /**
   * Limit the Queryable datasource by the specified offsets
   * @param  int $min=0  The number of matching elements to bypass
   * @param  int $max=25 The number of matching elements to select
   * @return Query   The adjusted Queryable object
   */
  public function limit(int $min = 0, int $max = 25): Queryable;
  /**
   * Insert the provided data into the queryable datasource
   * @param  Map<string, mixed>   $data   The data to insert
   * @return int  The ID of the inserted item
   */
  public function insert(Map<string, mixed> $data): mixed;
}
