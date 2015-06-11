<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * An executable queryable database table structure
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface ExecutableTableStructure extends TableStructure {
  /**
   * Execute the table structure
   * @return bool
   */
  public function execute() : bool;
}
