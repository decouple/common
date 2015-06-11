<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A foreign database table column interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface ForeignTableColumn extends TableColumn {
  /**
   * Provide the name of the field referenced by the foreign column
   * @param  string   $field    The field name
   * @return ForeignTableColumn     This object
   */
  public function references(string $field) : ForeignTableColumn;
  /**
   * Provide the name of the table referenced by the foreign column
   * @param  string   $table    The table name
   * @return ForeignTableColumn     This object
   */
  public function on(string $table) : ForeignTableColumn;
  /**
   * Provide the action to execute when the referenced object is deleted
   * @param  string $do           The action to execute
   * @return ForeignTableColumn     This object
   */
  public function onDelete(string $do) : ForeignTableColumn;
  /**
   * Get the data type of the column
   * @return string
   */
  public function getType() : string;
  /**
   * Get the name of the column
   * @return string
   */
  public function getName() : string;
}
