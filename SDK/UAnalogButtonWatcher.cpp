#include "UAnalogButtonWatcher.hpp"
#include "UButtonWatcher.hpp"
#include "UFunction.hpp"
UAnalogButtonWatcher* UAnalogButtonWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.AnalogButtonWatcher");
    return (UAnalogButtonWatcher*)res;
}
void UAnalogButtonWatcher::AnalogValue(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.AnalogButtonWatcher.AnalogValue"));
    struct Params_AnalogValue {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_AnalogValue params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
