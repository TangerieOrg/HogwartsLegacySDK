#include "UFunction.hpp"
#include "UGameLogicBase.hpp"
#include "UGameLogicVar_String.hpp"
UGameLogicVar_String* UGameLogicVar_String::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_String");
    return (UGameLogicVar_String*)res;
}
FString UGameLogicVar_String::GetCachedValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_String.GetCachedValue"));
    struct Params_GetCachedValue {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCachedValue params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UGameLogicVar_String::SetCachedValue(FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_String.SetCachedValue"));
    struct Params_SetCachedValue {
        FString Value; // 0x0
    }; // Size: 0x10
    Params_SetCachedValue params{};
    params.Value = (FString)Value;
    ProcessEvent(func, &params);
}
