#pragma once
#include <cstdint>
#include "ECreatureMovementSpeed.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AActor;
class ACameraStackActor;
class ACreature_Character;
class UCameraStackTarget;
#pragma pack(push, 1)
class UBTD_IsMountInGait_C : public UBTDecorator_BlueprintBase {
public:
    ECreatureMovementSpeed Gait; // 0xa0
    char pad_a1[0x7];
    static UBTD_IsMountInGait_C* StaticClass();
    bool PerformConditionCheck0(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess_1, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
}; // Size: 0xa8
#pragma pack(pop)
