<?hh // strict
namespace Decouple\Common\Contract;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

 /**
  * An attribute container interface implemented by classes that must support attributes
  *
  * @author Andrew Ewing <drew@phenocode.com>
  */
interface AttributeContainer {
  /**
   * Set an attribute value
   * @param string  $name   The name of the attribute
   * @param mixed   $value  The value
   */
  public function setAttribute(string $name, mixed $value) : void;
  /**
   * Get an attribute's value
   * @param  string $name   The name of the attribute
   * @return mixed          The value
   */
  public function getAttribute(string $name) : mixed;
  /**
   * Get all attributes
   * @return Map<string,mixed> Attributes
   */
  public function getAttributes() : Map<string,mixed>;
  /**
   * Boolean whether or not the given attribute is defined
   * @param  string   $name   Attribute name
   * @return bool             True if the given attribute is found, false if not
   */
  public function hasAttribute(string $name) : bool;
}
