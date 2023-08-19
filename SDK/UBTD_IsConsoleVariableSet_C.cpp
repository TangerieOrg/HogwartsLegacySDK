#include "AActor.hpp"
#include "UBTD_IsConsoleVariableSet_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
UBTD_IsConsoleVariableSet_C* UBTD_IsConsoleVariableSet_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsConsoleVariableSet.BTD_IsConsoleVariableSet_C");
    return (UBTD_IsConsoleVariableSet_C*)res;
}
bool UBTD_IsConsoleVariableSet_C::PerformConditionCheck(AActor* OwnerActor, int32_t CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsConsoleVariableSet.BTD_IsConsoleVariableSet_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_GetConsoleVariableIntValue_ReturnValue; // 0xc
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.CallFunc_GetConsoleVariableIntValue_ReturnValue = (int32_t)CallFunc_GetConsoleVariableIntValue_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
