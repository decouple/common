<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A database table interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Table extends DataStore {
  /**
   * Check if the table exists on the schema
   * @return bool
   */
  public function exists() : bool;
  /**
   * Create the table using the given callback
   * @param  (function(ExecutableTableStructure):void) $callback  The table create callback
   * @return bool     Creation status
   */
  public function create((function(ExecutableTableStructure):void) $callback) : bool;
  /**
   * Alter the table using the given callback
   * @param  (function(ExecutableTableStructure):void) $callback  The table alter callback
   * @return bool     Alter status
   */
  public function alter((function(ExecutableTableStructure):void) $callback) : bool;
  /**
   * Get an ExecutableTableStructure used to create a Table on the Schema
   * @return ExecutableTableStructure
   */
  public function getCreate() : ExecutableTableStructure;
  /**
   * Get an ExecutableTableStructure used to alter a Table on the Schema
   * @return ExecutableTableStructure
   */
  public function getAlter() : ExecutableTableStructure;
  /**
   * Drop the table from the schema
   * @return bool     Drop status
   */
  public function drop() : bool;
  /**
   * Get the name of the Table
   * @return string
   */
  public function getName() : string;
  /**
   * Get the Schema that owns the Table
   * @return Schema
   */
  public function schema() : Schema;
  /**
   * Create a new asynchronous query
   * @return AwaitableQuery
   */
  public function awaitable() : AwaitableQuery;
}
