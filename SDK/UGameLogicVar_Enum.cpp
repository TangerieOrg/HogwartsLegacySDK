#include "UFunction.hpp"
#include "UGameLogicBase.hpp"
#include "UGameLogicVar_Enum.hpp"
UGameLogicVar_Enum* UGameLogicVar_Enum::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_Enum");
    return (UGameLogicVar_Enum*)res;
}
void UGameLogicVar_Enum::SetCachedValue(uint8_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Enum.SetCachedValue"));
    struct Params_SetCachedValue {
        uint8_t Value; // 0x0
    }; // Size: 0x1
    Params_SetCachedValue params{};
    params.Value = (uint8_t)Value;
    ProcessEvent(func, &params);
}
uint8_t UGameLogicVar_Enum::GetCachedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Enum.GetCachedValue"));
    struct Params_GetCachedValue {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCachedValue params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
