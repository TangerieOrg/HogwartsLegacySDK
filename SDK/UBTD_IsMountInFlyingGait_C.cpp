#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "UBTD_IsMountInFlyingGait_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCameraStackTarget.hpp"
#include "UCreature_MountComponent.hpp"
#include "UFunction.hpp"
UBTD_IsMountInFlyingGait_C* UBTD_IsMountInFlyingGait_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsMountInFlyingGait.BTD_IsMountInFlyingGait_C");
    return (UBTD_IsMountInFlyingGait_C*)res;
}
bool UBTD_IsMountInFlyingGait_C::PerformConditionCheck(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreature_MountComponent* CallFunc_GetComponentByClass_ReturnValue, UCreature_MountComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Set_Contains_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsMountInFlyingGait.BTD_IsMountInFlyingGait_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x20
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x28
        AActor* CallFunc_GetAttachParentActor_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        bool CallFunc_IsValid_ReturnValue_1; // 0x39
        char pad_3a[0x6];
        UCreature_MountComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        UCreature_MountComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x48
        bool CallFunc_IsValid_ReturnValue_2; // 0x50
        bool CallFunc_IsValid_ReturnValue_3; // 0x51
        bool CallFunc_Set_Contains_ReturnValue; // 0x52
        bool CallFunc_Set_Contains_ReturnValue_1; // 0x53
    }; // Size: 0x54
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.K2Node_DynamicCast_AsCamera_Stack_Actor = (ACameraStackActor*)K2Node_DynamicCast_AsCamera_Stack_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_MountComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UCreature_MountComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    params.CallFunc_Set_Contains_ReturnValue = (bool)CallFunc_Set_Contains_ReturnValue;
    params.CallFunc_Set_Contains_ReturnValue_1 = (bool)CallFunc_Set_Contains_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
