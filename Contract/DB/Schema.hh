<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A database schema interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Schema {
  /**
   * Check if the schema exists on the driver
   * @return bool
   */
  public function exists(): bool;
  /**
   * Attempt to create the schema on the driver
   * @return bool
   */
  public function create(): bool;
  /**
   * Select the given table from the schema
   * @param  string $name     The name of the table to select
   * @return Table    The selected Table interface
   */
  public function table(string $name): Table;
  /**
   * Get the driver that the schema belongs to
   * @return Driver
   */
  public function driver(): Driver;
  /**
   * Execute a raw query on the schematic
   * @param  string $query    The query to execute
   * @return bool
   */
  public function execute(string $query): bool;
}
