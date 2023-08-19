#include "UFunction.hpp"
#include "UGameLogicBoolBase.hpp"
#include "UGameLogicVar_Bool.hpp"
UGameLogicVar_Bool* UGameLogicVar_Bool::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicVar_Bool");
    return (UGameLogicVar_Bool*)res;
}
void UGameLogicVar_Bool::SetCachedValue(bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicVar_Bool.SetCachedValue"));
    struct Params_SetCachedValue {
        bool bValue; // 0x0
    }; // Size: 0x1
    Params_SetCachedValue params{};
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
