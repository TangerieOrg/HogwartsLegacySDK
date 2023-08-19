#include "AActor.hpp"
#include "EEnemyAIAnimState.hpp"
#include "EEnemy_Ability.hpp"
#include "EEnemy_AnimMainState.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UNPC_AnimInstance_Interface.hpp"
void UNPC_AnimInstance_Interface::HandleHeadTracking(AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.HandleHeadTracking"));
    struct Params_HandleHeadTracking {
        AActor* Owner; // 0x0
    }; // Size: 0x8
    Params_HandleHeadTracking params{};
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
}
UNPC_AnimInstance_Interface* UNPC_AnimInstance_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_AnimInstance_Interface");
    return (UNPC_AnimInstance_Interface*)res;
}
void UNPC_AnimInstance_Interface::SetState(EEnemyAIAnimState& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.SetState"));
    struct Params_SetState {
        EEnemyAIAnimState InState; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.InState = (EEnemyAIAnimState)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UNPC_AnimInstance_Interface::SetMainState(EEnemy_AnimMainState& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.SetMainState"));
    struct Params_SetMainState {
        EEnemy_AnimMainState InState; // 0x0
    }; // Size: 0x1
    Params_SetMainState params{};
    params.InState = (EEnemy_AnimMainState)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UNPC_AnimInstance_Interface::SetAbilityActive(EEnemy_Ability InAbility, bool bUse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.SetAbilityActive"));
    struct Params_SetAbilityActive {
        EEnemy_Ability InAbility; // 0x0
        bool bUse; // 0x1
    }; // Size: 0x2
    Params_SetAbilityActive params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    params.bUse = (bool)bUse;
    ProcessEvent(func, &params);
}
EEnemyAIAnimState UNPC_AnimInstance_Interface::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.GetState"));
    struct Params_GetState {
        EEnemyAIAnimState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIAnimState)params.ReturnValue;
}
EEnemy_AnimMainState UNPC_AnimInstance_Interface::GetMainState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.GetMainState"));
    struct Params_GetMainState {
        EEnemy_AnimMainState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMainState params{};
    ProcessEvent(func, &params);
    return (EEnemy_AnimMainState)params.ReturnValue;
}
EEnemy_Ability UNPC_AnimInstance_Interface::GetActiveAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.GetActiveAbility"));
    struct Params_GetActiveAbility {
        EEnemy_Ability ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActiveAbility params{};
    ProcessEvent(func, &params);
    return (EEnemy_Ability)params.ReturnValue;
}
bool UNPC_AnimInstance_Interface::GetAbilityActive(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_AnimInstance_Interface.GetAbilityActive"));
    struct Params_GetAbilityActive {
        EEnemy_Ability InAbility; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_GetAbilityActive params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
