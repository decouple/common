<?hh // strict
namespace Decouple\Common\Contract;
interface AwaitableExecutable {
  public function execute() : Awaitable<bool>;
}
