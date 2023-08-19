#include "UBaseWatcher.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UWatcherRecord.hpp"
UBaseWatcher* UBaseWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.BaseWatcher");
    return (UBaseWatcher*)res;
}
void UBaseWatcher::FiltersHaveChanged(bool bNewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.BaseWatcher.FiltersHaveChanged"));
    struct Params_FiltersHaveChanged {
        bool bNewResult; // 0x0
    }; // Size: 0x1
    Params_FiltersHaveChanged params{};
    params.bNewResult = (bool)bNewResult;
    ProcessEvent(func, &params);
}
