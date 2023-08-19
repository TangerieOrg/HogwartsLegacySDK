#include "UFunction.hpp"
#include "UGameLogicBase.hpp"
#include "UGameLogicBoolBase.hpp"
UGameLogicBoolBase* UGameLogicBoolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicBoolBase");
    return (UGameLogicBoolBase*)res;
}
bool UGameLogicBoolBase::GetCachedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicBoolBase.GetCachedValue"));
    struct Params_GetCachedValue {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCachedValue params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
