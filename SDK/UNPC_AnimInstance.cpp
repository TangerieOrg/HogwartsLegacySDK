#include "AActor.hpp"
#include "AAmbulatory_Character.hpp"
#include "EEnemyAIAnimState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AnimMainState.hpp"
#include "ENPC_SpawnState.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAmbulatory_AnimInstance.hpp"
#include "UFunction.hpp"
#include "UNPC_AnimInstance.hpp"
UNPC_AnimInstance* UNPC_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_AnimInstance");
    return (UNPC_AnimInstance*)res;
}
void UNPC_AnimInstance::SetState(EEnemyAIAnimState& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.SetState"));
    struct Params_SetState {
        EEnemyAIAnimState InState; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.InState = (EEnemyAIAnimState)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UNPC_AnimInstance::SetMainState(EEnemy_AnimMainState& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.SetMainState"));
    struct Params_SetMainState {
        EEnemy_AnimMainState InState; // 0x0
    }; // Size: 0x1
    Params_SetMainState params{};
    params.InState = (EEnemy_AnimMainState)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UNPC_AnimInstance::OnTeleport(AAmbulatory_Character* Character, FVector AmountDisplaced, FRotator AmountRotated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.OnTeleport"));
    struct Params_OnTeleport {
        AAmbulatory_Character* Character; // 0x0
        FVector AmountDisplaced; // 0x8
        FRotator AmountRotated; // 0x14
    }; // Size: 0x20
    Params_OnTeleport params{};
    params.Character = (AAmbulatory_Character*)Character;
    params.AmountDisplaced = (FVector)AmountDisplaced;
    params.AmountRotated = (FRotator)AmountRotated;
    ProcessEvent(func, &params);
}
void UNPC_AnimInstance::SetAnimSpawnState(ENPC_SpawnState InAnimSpawnState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.SetAnimSpawnState"));
    struct Params_SetAnimSpawnState {
        ENPC_SpawnState InAnimSpawnState; // 0x0
    }; // Size: 0x1
    Params_SetAnimSpawnState params{};
    params.InAnimSpawnState = (ENPC_SpawnState)InAnimSpawnState;
    ProcessEvent(func, &params);
}
void UNPC_AnimInstance::SetAbilityActive(EEnemy_Ability InAbility, bool bUse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.SetAbilityActive"));
    struct Params_SetAbilityActive {
        EEnemy_Ability InAbility; // 0x0
        bool bUse; // 0x1
    }; // Size: 0x2
    Params_SetAbilityActive params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    params.bUse = (bool)bUse;
    ProcessEvent(func, &params);
}
EEnemyAIAnimState UNPC_AnimInstance::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.GetState"));
    struct Params_GetState {
        EEnemyAIAnimState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIAnimState)params.ReturnValue;
}
void UNPC_AnimInstance::HandleHeadTracking(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.HandleHeadTracking"));
    struct Params_HandleHeadTracking {
        AActor* Owner; // 0x0
    }; // Size: 0x8
    Params_HandleHeadTracking params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
}
EEnemy_AnimMainState UNPC_AnimInstance::GetMainState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.GetMainState"));
    struct Params_GetMainState {
        EEnemy_AnimMainState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMainState params{};
    ProcessEvent(func, &params);
    return (EEnemy_AnimMainState)params.ReturnValue;
}
ENPC_SpawnState UNPC_AnimInstance::GetAnimSpawnState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.GetAnimSpawnState"));
    struct Params_GetAnimSpawnState {
        ENPC_SpawnState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAnimSpawnState params{};
    ProcessEvent(func, &params);
    return (ENPC_SpawnState)params.ReturnValue;
}
EEnemy_Ability UNPC_AnimInstance::GetActiveAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.GetActiveAbility"));
    struct Params_GetActiveAbility {
        EEnemy_Ability ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActiveAbility params{};
    ProcessEvent(func, &params);
    return (EEnemy_Ability)params.ReturnValue;
}
bool UNPC_AnimInstance::GetAbilityActive(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance.GetAbilityActive"));
    struct Params_GetAbilityActive {
        EEnemy_Ability InAbility; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetAbilityActive params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
