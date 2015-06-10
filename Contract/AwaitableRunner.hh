<?hh // strict
namespace Decouple\Common\Contract;
interface AwaitableRunner {
  public function add(string $name, AwaitableRunnable $item) : void;
  public function remove(string $name) : void;
  public function get(string $name) : AwaitableRunnable;
  public function run() : Awaitable<void>;
}
