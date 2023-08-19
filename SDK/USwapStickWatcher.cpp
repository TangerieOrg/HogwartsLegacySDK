#include "UStickWatcher.hpp"
#include "USwapStickWatcher.hpp"
USwapStickWatcher* USwapStickWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SwapStickWatcher");
    return (USwapStickWatcher*)res;
}
