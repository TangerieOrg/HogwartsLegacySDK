#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACreature_Character.hpp"
#include "ECreatureMovementSpeed.hpp"
#include "UBTD_IsMountInGait_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCameraStackTarget.hpp"
#include "UFunction.hpp"
UBTD_IsMountInGait_C* UBTD_IsMountInGait_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsMountInGait.BTD_IsMountInGait_C");
    return (UBTD_IsMountInGait_C*)res;
}
bool UBTD_IsMountInGait_C::PerformConditionCheck0(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess_1, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsMountInGait.BTD_IsMountInGait_C.PerformConditionCheck"));
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
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x40
        bool K2Node_DynamicCast_bSuccess_1; // 0x48
        char pad_49[0x7];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1; // 0x50
        bool K2Node_DynamicCast_bSuccess_2; // 0x58
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x59
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x5a
    }; // Size: 0x5b
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.K2Node_DynamicCast_AsCamera_Stack_Actor = (ACameraStackActor*)K2Node_DynamicCast_AsCamera_Stack_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_DynamicCast_AsCreature_Character_1 = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character_1;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
