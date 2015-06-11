<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */
use Decouple\Common\Contract\AttributeContainer;
/**
 * A database table column interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface TableColumn extends AttributeContainer {
  /**
   * Get the type of the table column
   * @return string
   */
  public function getType() : string;
  /**
   * Get the name of the table column
   * @return string
   */
  public function getName() : string;
  /**
   * Configure the unique designation of the table column
   * @param  bool $unique=true
   * @return TableColumn    This object
   */
  public function unique(bool $unique=true) : TableColumn;
  /**
   * Configure the unsigned designation of the table column
   * @param  bool $unsigned=true
   * @return TableColumn    This object
   */
  public function unsigned(bool $unsigned=true) : TableColumn;
}
