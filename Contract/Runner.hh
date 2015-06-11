<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * A runner interface implemented by classes that run other objects
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface Runner {
  /**
   * Add a named runnable to the runner for execution
   * @param string            $name The name of the Runnable
   * @param Runnable          $item The Runnable item to add to the runner
   */
  public function add(string $name, Runnable $item) : void;
  /**
   * Remove a named runnable from the runner
   * @param  string $name         The name of the runnable
   * @return void
   */
  public function remove(string $name) : void;
  /**
   * Get a named runnable from the runner
   * @param  string $name         The name of the runnable
   * @return void
   */
  public function get(string $name) : Runnable;
  /**
   * Execute the runner and all of the runnable elements
   * @return void
   */
  public function run() : void;
}
