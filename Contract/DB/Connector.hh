<?hh // strict
namespace Decouple\Common\Contract\DB;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */

/**
 * A database connector interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Connector {
  /**
   * Connect to the database
   * @param  Map<string, string>  $params         Database parameters
   * @param  string               $username       Database username
   * @param  string               $password       Database password
   * @param  Map<string, mixed>   $options=Map {} Additional options
   * @return bool   The connection status
   */
  public function connect(
    Map<string, string> $params,
    string $username,
    string $password,
    Map<string, mixed> $options = Map {},
  ): bool;
  /**
   * Check if the database is currently connected
   * @return bool
   */
  public function isConnected(): bool;
  /**
   * Check if the database has errors
   * @return bool
   */
  public function hasErrors(): bool;
  /**
   * Configure whether or not the database throws exceptions
   * @param  bool $throws   True for exceptions, false for none
   * @return void
   */
  public function throwExceptions(bool $throws): void;
  /**
   * Check if the database throws exceptions
   * @return bool
   */
  public function throwsExceptions(): bool;
  /**
   * Get the last insert ID from the database
   * @return int The ID of the last item inserted
   */
  public function lastInsertId(): int;
}
