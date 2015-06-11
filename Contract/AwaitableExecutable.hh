<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * An awaitable executable interface implemented by classes execute asynchronously
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface AwaitableExecutable {
  /**
   * Execute
   * @return bool Execution status
   */
  public function execute() : Awaitable<bool>;
}
