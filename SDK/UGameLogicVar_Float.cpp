#include "UFunction.hpp"
#include "UGameLogicBase.hpp"
#include "UGameLogicVar_Float.hpp"
void UGameLogicVar_Float::Add(float Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Float.Add"));
    struct Params_Add {
        float Delta; // 0x0
    }; // Size: 0x4
    Params_Add params{};
    params.Delta = (float)Delta;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Float::SetCachedValue(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Float.SetCachedValue"));
    struct Params_SetCachedValue {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetCachedValue params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
UGameLogicVar_Float* UGameLogicVar_Float::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_Float");
    return (UGameLogicVar_Float*)res;
}
float UGameLogicVar_Float::GetCachedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Float.GetCachedValue"));
    struct Params_GetCachedValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCachedValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UGameLogicVar_Float::Subtract(float Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Float.Subtract"));
    struct Params_Subtract {
        float Delta; // 0x0
    }; // Size: 0x4
    Params_Subtract params{};
    params.Delta = (float)Delta;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Float::Multiply(float Factor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Float.Multiply"));
    struct Params_Multiply {
        float Factor; // 0x0
    }; // Size: 0x4
    Params_Multiply params{};
    params.Factor = (float)Factor;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Float::Divide(float Factor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Float.Divide"));
    struct Params_Divide {
        float Factor; // 0x0
    }; // Size: 0x4
    Params_Divide params{};
    params.Factor = (float)Factor;
    ProcessEvent(func, &params);
}
