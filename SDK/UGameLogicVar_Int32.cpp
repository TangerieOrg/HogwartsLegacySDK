#include "UFunction.hpp"
#include "UGameLogicBase.hpp"
#include "UGameLogicVar_Int32.hpp"
UGameLogicVar_Int32* UGameLogicVar_Int32::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_Int32");
    return (UGameLogicVar_Int32*)res;
}
int32_t UGameLogicVar_Int32::GetCachedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Int32.GetCachedValue"));
    struct Params_GetCachedValue {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCachedValue params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameLogicVar_Int32::Subtract(int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Int32.Subtract"));
    struct Params_Subtract {
        int32_t Delta; // 0x0
    }; // Size: 0x4
    Params_Subtract params{};
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Int32::Multiply(int32_t Factor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Int32.Multiply"));
    struct Params_Multiply {
        int32_t Factor; // 0x0
    }; // Size: 0x4
    Params_Multiply params{};
    params.Factor = (int32_t)Factor;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Int32::SetCachedValue(int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Int32.SetCachedValue"));
    struct Params_SetCachedValue {
        int32_t Value; // 0x0
    }; // Size: 0x4
    Params_SetCachedValue params{};
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Int32::Divide(int32_t Denominator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Int32.Divide"));
    struct Params_Divide {
        int32_t Denominator; // 0x0
    }; // Size: 0x4
    Params_Divide params{};
    params.Denominator = (int32_t)Denominator;
    ProcessEvent(func, &params);
}
void UGameLogicVar_Int32::Add(int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Int32.Add"));
    struct Params_Add {
        int32_t Delta; // 0x0
    }; // Size: 0x4
    Params_Add params{};
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
