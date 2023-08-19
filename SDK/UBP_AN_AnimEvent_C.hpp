#pragma once
#include <cstdint>
#include "EEnemy_AbilityEvent.hpp"
#include "UAnimNotify.hpp"
class USkeletalMeshComponent;
class UAnimSequenceBase;
class UAnimInstance;
class AActor;
class UEnemyAIComponent;
#pragma pack(push, 1)
class UBP_AN_AnimEvent_C : public UAnimNotify {
public:
    EEnemy_AbilityEvent Enemy_Event; // 0x38
    char pad_39[0x7];
    static UBP_AN_AnimEvent_C* StaticClass();
    bool Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetOwningActor_ReturnValue, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x40
#pragma pack(pop)
