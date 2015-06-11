<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * A buildable interface implemented by classes that are built
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface Buildable {
  /**
   * Build the object
   * @return mixed  The result of the build operation
   */
  public function build() : mixed;
}
