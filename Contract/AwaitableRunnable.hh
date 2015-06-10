<?hh // strict
namespace Decouple\Common\Contract;
interface AwaitableRunnable {
  public function run() : Awaitable<void>;
}
