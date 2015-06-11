<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * A builder interface implemented by classes that build other objects
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface Builder {
  /**
   * Add a named buildable object to the builder
   * @param string    $name The name of the buildable
   * @param Buildable $item The buildable object
   */
  public function add(string $name, Buildable $item) : void;
  /**
   * Remove a named buildable object from the builder
   * @param  string $name         The name of the builable object
   * @return void
   */
  public function remove(string $name) : void;
  /**
   * Get a named buildable object from the builder
   * @param  string $name   The name of the buildable object
   * @return Buildable      The buildable object
   */
  public function get(string $name) : Buildable;
  /**
   * Build the builder and all contained buildable objects
   * @return {[type]} [description]
   */
  public function build() : void;
}
