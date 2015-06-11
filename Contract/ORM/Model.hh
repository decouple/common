<?hh // strict
namespace Decouple\Common\Contract\ORM;
/**
 * This software is maintained voluntarily under the MIT license.
 * For more information, see <http://www.decouple.io/>
 */
use Decouple\Common\Contract\DB\Queryable;
/**
 * An ORM Model interface
 *
 * @author Andrew Ewing <drew@phenocode.com>
 */
interface Model extends Queryable {
  /**
   * Get an element that belongs to the current model object
   * @param  string $model        The model or table that the element belongs to
   * @param  string $key          The key field to compare
   * @param  string $id           The ID field compared against $key
   * @return Queryable
   */
  public function belongsTo(string $model, string $key, string $id) : Queryable;
  /**
   * Get the elements that belong to the current model object
   * @param  string $model        The model to select the child elements from
   * @param  string $key          The key field to compare to this model's ID
   * @return Queryable
   */
  public function hasMany(string $model, string $key): Queryable;
}
