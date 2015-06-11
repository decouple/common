<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * A runnable interface implemented by classes that are run by other objects
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface Runnable {
  /**
   * Run the object
   * @return void
   */
  public function run() : void;
}
