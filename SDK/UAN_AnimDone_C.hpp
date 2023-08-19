#pragma once
#include <cstdint>
#include "EEnemyAIAnimState.hpp"
#include "UAnimNotify.hpp"
class USkeletalMeshComponent;
class UAnimSequenceBase;
class UAnimInstance;
class UEnemy_AnimInstance;
#pragma pack(push, 1)
class UAN_AnimDone_C : public UAnimNotify {
public:
    EEnemyAIAnimState Anim; // 0x38
    char pad_39[0x7];
    static UAN_AnimDone_C* StaticClass();
    bool Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UEnemy_AnimInstance* K2Node_DynamicCast_AsEnemy_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x40
#pragma pack(pop)
