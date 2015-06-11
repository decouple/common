<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A database statement interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Statement {
  /**
   * Get the error code of the Statement, if applicable
   * @return int    Error code
   */
  public function errorCode(): int;
  /**
   * Get a Vector containing error information
   * @return Traversable<mixed>
   */
  public function errorInfo(): Traversable<mixed>;
  /**
   * Get the number of rows selected by the statement
   * @return int
   */
  public function rowCount(): int;
  /**
   * Fetch the column at the given index [from the given row]
   * @param  int $id=0    The index of the column to fetch
   * @return mixed
   */
  public function fetchColumn(int $id = 0): mixed;
  /**
   * Fetch all results from the Statement
   * @return Vector<Map<string, mixed>>
   */
  public function fetchAll(): Vector<Map<string, mixed>>;
  /**
   * Execute the statement with the given parameters
   * @param  mixed $params=null     The parameters to bind
   * @return mixed      The result
   */
  public function execute(mixed $params = null): mixed;
  /**
   * Bind a statement parameter
   * @param  int     $paramno             The parameter index
   * @param  mixed   $param               The parameter value
   * @param  ?string $type=null           The parameter type
   * @param  int     $max_value_len=0     The max length of the value
   * @param  mixed   $driver_params=null  The parameters to pass to the driver
   * @return void
   */
  public function bindParam(
    int $paramno,
    mixed $param,
    ?string $type = null,
    int $max_value_len = 0,
    mixed $driver_params = null,
  ): void;
  /**
   * Debug statement parameters
   * @return mixed
   */
  public function debugDumpParams(): mixed;
}
