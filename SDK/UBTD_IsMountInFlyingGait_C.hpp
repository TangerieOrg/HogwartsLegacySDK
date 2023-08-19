#pragma once
#include <cstdint>
#include "UBTDecorator_BlueprintBase.hpp"
class AActor;
class ACameraStackActor;
class UCameraStackTarget;
class UCreature_MountComponent;
#pragma pack(push, 1)
class UBTD_IsMountInFlyingGait_C : public UBTDecorator_BlueprintBase {
public:
    char pad_a0[0x50];
    static UBTD_IsMountInFlyingGait_C* StaticClass();
    bool PerformConditionCheck(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreature_MountComponent* CallFunc_GetComponentByClass_ReturnValue, UCreature_MountComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Set_Contains_ReturnValue_1);
}; // Size: 0xf0
#pragma pack(pop)
