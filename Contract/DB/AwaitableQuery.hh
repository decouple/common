<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */
use Decouple\Common\Contract\Buildable;
/**
 * An awaitable query interface implemented by classes that are queryable asynchronously
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface AwaitableQuery extends Queryable {
  /**
   * Execute the query
   * @return Awaitable<Statement> The Statement result of Query execution
   */
  public function execute(): Awaitable<Statement>;
  /**
   * Insert the provided data into the queryable datasource
   * @param  Map<string, mixed>   $data   The data to insert
   * @return Awaitable<int>   The ID of the inserted item
   */
  public function insert(Map<string, mixed> $data): Awaitable<int>;
  /**
   * Retrieve the first result matching the current query structure
   * @return Awaitable<?Map<string, mixed>>   A Map of the result data or null if none found
   */
  public function first(): Awaitable<?Map<string, mixed>>;
  /**
   * Fetch all of the results matching the current query structure
   * @return Awaitable<?Map<string, mixed>>   A Map of the results or null if none found
   */
  public function fetchAll(): Awaitable<Vector<Map<string, mixed>>>;
  /**
   * Select the provided fields, or all fields if none/null provided
   * @param  ?Vector<string> $fields=null   The fields to select
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function select(?Vector<string> $fields = null): AwaitableQuery;
  /**
   * Update the queryable datasource with the given data
   * @param  Map<string, mixed>   $data   The data to update
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function update(Map<string, mixed> $data): AwaitableQuery;
  /**
   * Delete all of the results matching the current query structure
   * @param  bool   $soft=false   Soft Delete
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function delete(bool $soft = false): AwaitableQuery;
  /**
   * Assign the provided filter to the queryable datasource
   * @param  string $field        The field to compare
   * @param  string $comp         The comparator
   * @param  mixed  $value        The value to compare against
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function where(string $field, string $comp, mixed $value): AwaitableQuery;
  /**
   * Assign the provided filter set to the queryable datasource
   * @param  KeyedTraversable<string, string>   $array A traversable collection of filters
   * @return Queryable    The adjusted Queryable object
   */
  public function whereAll(
    KeyedTraversable<string, string> $array,
  ): Queryable;
  /**
   * Order the AwaitableQuery datasource by the given parameters
   * @param  string $field        The field to order by
   * @param  string $direction    The direction to order in
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function orderBy(string $field, string $direction): AwaitableQuery;
  /**
   * Limit the AwaitableQuery datasource by the specified offsets
   * @param  int $min=0  The number of matching elements to bypass
   * @param  int $max=25 The number of matching elements to select
   * @return AwaitableQuery   The adjusted AwaitableQuery object
   */
  public function limit(int $min = 0, int $max = 25): AwaitableQuery;
}
