<?hh // strict
namespace Decouple\Common;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */
use Decouple\Common\Contract\AttributeContainer;
/**
 * An abstract attribute container class extended by other classes to support attributes
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
class AbstractAttributeContainer implements AttributeContainer {
  /**
   * A map containing attributes
   */
  protected Map<string,mixed> $attributes;
  public function __construct() {
    $this->attributes = Map {};
  }
  /**
   * Add or modify an attribute value
   * @param string $name  The attribute name
   * @param mixed  $value The value
   */
  public function setAttribute(string $name, mixed $value) : void  {
    $this->attributes->set($name, $value);
  }
  /**
   * Get an attribute value
   * @param  string $name         The attribute name
   * @return mixed                The value
   */
  public function getAttribute(string $name) : mixed {
    return $this->attributes->get($name);
  }
  /**
   * Get all attributes
   * @return Map<string,mixed> Attributes
   */
  public function getAttributes() : Map<string,mixed> {
    return $this->attributes;
  }
  /**
   * Boolean whether or not the given attribute is defined
   * @param  string   $name   Attribute name
   * @return bool             True if the given attribute is found, false if not
   */
  public function hasAttribute(string $name) : bool {
    return $this->attributes->contains($name);
  }
}
