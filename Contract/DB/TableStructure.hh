<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A database table structure interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface TableStructure {
  /**
   * Add an AUTO_INCREMENT primary key column to the table structure
   * @param  string $name       The name of the column
   * @param  int    $length=14  The length of the column
   * @return TableColumn    A TableColumn instance
   */
  public function increments(string $name, int $length=14) : TableColumn;
  /**
   * Add an integer column to the table structure
   * @param  string $name         The name of the column
   * @param  int    $length=10    The length of the column
   * @return TableColumn    A TableColumn instance
   */
  public function integer(string $name, int $length=10) : TableColumn;
  /**
   * Add a string (varchar) column to the table structure
   * @param  string $name         The name of the column
   * @param  int    $length=55    The length of the column
   * @return TableColumn    A TableColumn instance
   */
  public function string(string $name, int $length=55) : TableColumn;
  /**
   * Add a text column to the table structure
   * @param  string $name         The name of the column
   * @return TableColumn    A TableColumn instance
   */
  public function text(string $name) : TableColumn;
  /**
   * Add an enum column to the table structure
   * @param  string $name         The name of the column
   * @param  Traversable<string> $values    The valid enum values
   * @return TableColumn    A TableColumn instance
   */
  public function enum(string $name, Traversable<string> $values) : TableColumn;
  /**
   * Add a decimal column to the table structure
   * @param  string $name         The name of the column
   * @param  int    $numbers=7    The number of integer digits
   * @param  int    $decimals=2   The number of decimal places
   * @return TableColumn    A TableColumn instance
   */
  public function decimal(string $name, int $numbers=7, int $decimals=2) : TableColumn;
  /**
   * Add a foreign column to the table structure
   * @param  string $name         The name of the foreign key column
   * @return ForeignTableColumn     A ForeignTableColumn instance
   */
  public function foreign(string $name) : ForeignTableColumn;
  /**
   * Configure if the TableStructure soft deletes rows
   * @param  bool $value=true   The soft delete setting
   * @return void
   */
  public function softDeletes(bool $value=true) : void;
  /**
   * Configure if the TableStructure automatically adds timestamp elements to the rows
   * @param  bool $value=true   The timestamps setting
   * @return void
   */
  public function timestamps(bool $value=true) : void;
  /**
   * Add a timestamp column to the table structure
   * @param  string $name         The name of the column
   * @param  bool   $value=true   The default value
   * @return void
   */
  public function timestamp(string $name, bool $value=true) : void;
  /**
   * Add a TableColumn to the table structure
   * @param TableColumn $column   The column to add
   * @return void
   */
  public function addColumn(TableColumn $column) : void;
  /**
   * Get a TableColumn matching the given name from the table structure
   * @param  string $name         The name of the table column
   * @return ?TableColumn       The TableColumn if found, or null otherwise
   */
  public function getColumn(string $name) : ?TableColumn;
  /**
   * Get all of the TableColumns from the table structure
   * @return Map<string,TableColumn>
   */
  public function getColumns() : Map<string,TableColumn>;
  /**
   * Recreate a TableStructure from a serialized string
   * @param  string $string       The serialized TableStructure object
   * @return void
   */
  public function fromString(string $string) : void;
  /**
   * Serialize a TableStructure object
   * @return string
   */
  public function toString() : string;
  /**
   * Get the name of the table structure
   * @return string
   */
  public function getName() : string;
}
