<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */
use Exception;
/**
 * A database driver interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Driver {
  /**
   * Connect the driver object
   * @param  Map<string, string>  $params         Database parameters
   * @param  string               $username       Database username
   * @param  string               $password       Database password
   * @param  Map<string, mixed>   $options=Map {} Additional options
   * @return bool   The connection status
   */
  public function connect(Map<string,string> $params, string $username, string $password, Map<string,mixed> $options=Map {}) : bool;
  /**
   * Get the database schema object
   * @param  string $name   The name of the schema
   * @return Schema         The Schema object matching the given name
   */
  public function schema(string $name) : Schema;
  /**
   * Check if the driver is currently connected
   * @return bool
   */
  public function isConnected() : bool;
  /**
   * Check if the driver has errors
   * @return bool
   */
  public function hasErrors() : bool;
  /**
   * Check if the driver throws exceptions
   * @return bool
   * TODO: Rename to hasExceptions
   */
  public function throwsExceptions() : bool;
  /**
   * Configure whether or not the driver throws exceptions
   * @param  bool $throws   True for exceptions, false for none
   * @return void
   */
  public function throwExceptions(bool $throws) : void;
  /**
   * Get the errors from the driver
   * @return Vector<Exception>
   * TODO: Rename to getExceptions
   */
  public function getErrors() : Vector<Exception>;
  /**
   * Prepare a raw query string for execution
   * @param  string   $query  The query string to prepare
   * @return Statement    The prepared Statement
   */
  public function prepare(string $query): Statement;
  /**
   * Retrieve the database connector
   * @return Connector
   */
  public function connector() : Connector;
  /**
   * Execute a raw query string
   * @param  string   $query    The query string to execute
   * @return bool     The execution status
   */
  public function execute(string $query) : bool;
}
