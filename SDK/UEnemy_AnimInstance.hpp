#pragma once
#include <cstdint>
#include "EEnemyAIDodgeState.hpp"
#include "FGameplayTag.hpp"
#include "UNPC_AnimInstance.hpp"
class UEnemyAISpawnData;
#pragma pack(push, 1)
class UEnemy_AnimInstance : public UNPC_AnimInstance {
public:
    EEnemyAIDodgeState DodgeState; // 0x670
    char pad_671[0x3];
    FGameplayTag AttackTypeTag; // 0x674
    uint8_t WeaponActivateStoredIndex; // 0x67c
    char pad_67d[0x3];
    UEnemyAISpawnData* SpawnDataPtr; // 0x680
    bool bOnGround; // 0x688
    char pad_689[0x7];
    static UEnemy_AnimInstance* StaticClass();
    void SetSpawnData(UEnemyAISpawnData* InSpawnDataPtr);
    void SetAttackTypeTag(FGameplayTag InType);
    void SetAnimDodgeState(EEnemyAIDodgeState InDodgeState);
    UEnemyAISpawnData* GetSpawnData();
    FGameplayTag GetAttackTypeTag();
    EEnemyAIDodgeState GetAnimDodgeState();
    bool CanExitAttackLoop();
    void AnimNotify_ImpulseToTarget(float ActiveFrames, float DistFromTarget, float MaxTravelDist);
}; // Size: 0x690
#pragma pack(pop)
