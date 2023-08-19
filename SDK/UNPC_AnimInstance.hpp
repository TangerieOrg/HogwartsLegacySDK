#pragma once
#include <cstdint>
#include "EEnemyAIAnimState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AnimMainState.hpp"
#include "ENPC_SpawnState.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAmbulatory_AnimInstance.hpp"
class AAmbulatory_Character;
class AActor;
#pragma pack(push, 1)
class UNPC_AnimInstance : public UAmbulatory_AnimInstance {
public:
    char pad_5e0[0x8];
    EEnemyAIAnimState State; // 0x5e8
    EEnemyAIAnimState LastState; // 0x5e9
    EEnemy_AnimMainState MainState; // 0x5ea
    EEnemy_AnimMainState LastMainState; // 0x5eb
    float LookAtAlpha; // 0x5ec
    char pad_5f0[0x8];
    float ParryAnimTime; // 0x5f8
    bool bParryAnimTimeSet; // 0x5fc
    ENPC_SpawnState SpawnState; // 0x5fd
    EEnemy_Ability ActiveAbility; // 0x5fe
    char pad_5ff[0x71];
    static UNPC_AnimInstance* StaticClass();
    void SetState(EEnemyAIAnimState& InState);
    void SetMainState(EEnemy_AnimMainState& InState);
    void SetAnimSpawnState(ENPC_SpawnState InAnimSpawnState);
    void SetAbilityActive(EEnemy_Ability InAbility, bool bUse);
    void OnTeleport(AAmbulatory_Character* Character, FVector AmountDisplaced, FRotator AmountRotated);
    void HandleHeadTracking(AActor* Owner);
    EEnemyAIAnimState GetState();
    EEnemy_AnimMainState GetMainState();
    ENPC_SpawnState GetAnimSpawnState();
    EEnemy_Ability GetActiveAbility();
    bool GetAbilityActive(EEnemy_Ability InAbility);
}; // Size: 0x670
#pragma pack(pop)
