<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * An Executable interface implemented by classes that are executed
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface Executable {
  /**
   * Execute the object
   * @return bool     The success of execution
   */
  public function execute() : bool;
}
