#pragma once
#include <cstdint>
#include "EEnemyAIAnimTransState\Type.hpp"
#include "FGameplayTag.hpp"
#include "UInterface.hpp"
class UEnemyAISpawnData;
#pragma pack(push, 1)
class UEnemy_AnimInstance_Interface : public UInterface {
public:
    static UEnemy_AnimInstance_Interface* StaticClass();
    void SetTransState(EEnemyAIAnimTransState::Type& InState);
    void SetSpawnData(UEnemyAISpawnData* InSpawnDataPtr);
    void SetAttackTypeTag(FGameplayTag InType);
    EEnemyAIAnimTransState::Type GetTransState();
    UEnemyAISpawnData* GetSpawnData();
    FGameplayTag GetAttackTypeTag();
}; // Size: 0x28
#pragma pack(pop)
