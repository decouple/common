<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * An awaitable runner interface implemented by classes that run asynchronously
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface AwaitableRunnable {
  /**
   * Run the Runnable object
   * @return Awaitable<void>
   */
  public function run() : Awaitable<void>;
}
