#include "UStickWatcherRecord.hpp"
#include "USwapStickWatcherRecord.hpp"
USwapStickWatcherRecord* USwapStickWatcherRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SwapStickWatcherRecord");
    return (USwapStickWatcherRecord*)res;
}
