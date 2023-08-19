#pragma once
#include <cstdint>
#include "EEnemyAIAnimState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AnimMainState.hpp"
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UNPC_AnimInstance_Interface : public UInterface {
public:
    static UNPC_AnimInstance_Interface* StaticClass();
    void SetState(EEnemyAIAnimState& InState);
    void SetMainState(EEnemy_AnimMainState& InState);
    void SetAbilityActive(EEnemy_Ability InAbility, bool bUse);
    void HandleHeadTracking(AActor* Owner);
    EEnemyAIAnimState GetState();
    EEnemy_AnimMainState GetMainState();
    EEnemy_Ability GetActiveAbility();
    bool GetAbilityActive(EEnemy_Ability InAbility);
}; // Size: 0x28
#pragma pack(pop)
