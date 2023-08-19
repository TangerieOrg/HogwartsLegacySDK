#include "AActor.hpp"
#include "ABP_PerformTasksForAI_C.hpp"
#include "APerformTasksForAI.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
ABP_PerformTasksForAI_C* ABP_PerformTasksForAI_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/BP_PerformTasksForAI.BP_PerformTasksForAI_C");
    return (ABP_PerformTasksForAI_C*)res;
}
void ABP_PerformTasksForAI_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_PerformTasksForAI.BP_PerformTasksForAI_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_PerformTasksForAI_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_PerformTasksForAI.BP_PerformTasksForAI_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_PerformTasksForAI_C::CallSwitchOnBP0(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_PerformTasksForAI.BP_PerformTasksForAI_C.CallSwitchOnBP"));
    struct Params_CallSwitchOnBP {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_CallSwitchOnBP params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
void ABP_PerformTasksForAI_C::CallSwitchOffBP0(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_PerformTasksForAI.BP_PerformTasksForAI_C.CallSwitchOffBP"));
    struct Params_CallSwitchOffBP {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_CallSwitchOffBP params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
void ABP_PerformTasksForAI_C::ExecuteUbergraph_BP_PerformTasksForAI(int32_t EntryPoint, AActor* K2Node_Event_SwitchActor_1, AActor* K2Node_Event_SwitchActor, UObject* K2Node_Event_InTarget_1, UObject* K2Node_Event_InTarget) {}
