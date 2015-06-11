<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * An awaitable runner interface implemented by classes that run runnables asynchronously
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface AwaitableRunner {
  /**
   * Add a named awaitable runnable to the runner for execution
   * @param string            $name The name of the Runnable
   * @param AwaitableRunnable $item The Runnable item to add to the runner
   */
  public function add(string $name, AwaitableRunnable $item) : void;
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
  public function get(string $name) : AwaitableRunnable;
  /**
   * Execute the runner and all of the runnable elements
   * @return Awaitable<void>
   */
  public function run() : Awaitable<void>;
}
