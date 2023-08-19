#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "FVector.hpp"
#include "UBTD_IsTargetVelocityAboveThreshold_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCameraStackTarget.hpp"
#include "UFunction.hpp"
bool UBTD_IsTargetVelocityAboveThreshold_C::PerformConditionCheck0(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, bool Temp_bool_Variable, AActor* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, AActor* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSizeXY_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsTargetVelocityAboveThreshold.BTD_IsTargetVelocityAboveThreshold_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x20
        bool Temp_bool_Variable; // 0x28
        char pad_29[0x7];
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x7];
        AActor* CallFunc_GetAttachParentActor_ReturnValue; // 0x40
        AActor* K2Node_Select_Default; // 0x48
        bool CallFunc_IsValid_ReturnValue_1; // 0x50
        char pad_51[0x3];
        FVector CallFunc_GetVelocity_ReturnValue; // 0x54
        float CallFunc_VSizeXY_ReturnValue; // 0x60
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x64
    }; // Size: 0x65
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.K2Node_DynamicCast_AsCamera_Stack_Actor = (ACameraStackActor*)K2Node_DynamicCast_AsCamera_Stack_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetAttachParentActor_ReturnValue = (AActor*)CallFunc_GetAttachParentActor_ReturnValue;
    params.K2Node_Select_Default = (AActor*)K2Node_Select_Default;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetVelocity_ReturnValue = (FVector)CallFunc_GetVelocity_ReturnValue;
    params.CallFunc_VSizeXY_ReturnValue = (float)CallFunc_VSizeXY_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UBTD_IsTargetVelocityAboveThreshold_C* UBTD_IsTargetVelocityAboveThreshold_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BehaviorTree/Decorators/BTD_IsTargetVelocityAboveThreshold.BTD_IsTargetVelocityAboveThreshold_C");
    return (UBTD_IsTargetVelocityAboveThreshold_C*)res;
}
