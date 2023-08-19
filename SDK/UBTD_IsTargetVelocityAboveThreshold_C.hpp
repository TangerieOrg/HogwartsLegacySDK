#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AActor;
class ACameraStackActor;
class UCameraStackTarget;
#pragma pack(push, 1)
class UBTD_IsTargetVelocityAboveThreshold_C : public UBTDecorator_BlueprintBase {
public:
    float Speed; // 0xa0
    bool UseAttachParent; // 0xa4
    char pad_a5[0x3];
    AActor* Actor; // 0xa8
    static UBTD_IsTargetVelocityAboveThreshold_C* StaticClass();
    bool PerformConditionCheck0(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, bool Temp_bool_Variable, AActor* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, AActor* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_GetVelocity_ReturnValue, float CallFunc_VSizeXY_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
}; // Size: 0xb0
#pragma pack(pop)
