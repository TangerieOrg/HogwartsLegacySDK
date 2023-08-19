#include "EEnemy_Ability.hpp"
#include "UAblAbilityComponent.hpp"
#include "UActorComponent.hpp"
#include "UDynamicBranchComponent.hpp"
#include "UFunction.hpp"
UDynamicBranchComponent* UDynamicBranchComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicBranchComponent");
    return (UDynamicBranchComponent*)res;
}
EEnemy_Ability UDynamicBranchComponent::GetActiveAbility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.GetActiveAbility"));
    struct Params_GetActiveAbility {
        EEnemy_Ability ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActiveAbility params{};
    ProcessEvent(func, &params);
    return (EEnemy_Ability)params.ReturnValue;
}
void UDynamicBranchComponent::SetAbilitySupported(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.SetAbilitySupported"));
    struct Params_SetAbilitySupported {
        EEnemy_Ability InAbility; // 0x0
    }; // Size: 0x1
    Params_SetAbilitySupported params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
}
void UDynamicBranchComponent::StartDynamicBranch(EEnemy_Ability InAbility, EEnemy_Ability InNextAbility, bool bStartImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.StartDynamicBranch"));
    struct Params_StartDynamicBranch {
        EEnemy_Ability InAbility; // 0x0
        EEnemy_Ability InNextAbility; // 0x1
        bool bStartImmediate; // 0x2
    }; // Size: 0x3
    Params_StartDynamicBranch params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    params.InNextAbility = (EEnemy_Ability)InNextAbility;
    params.bStartImmediate = (bool)bStartImmediate;
    ProcessEvent(func, &params);
}
void UDynamicBranchComponent::SetAbilityActive(EEnemy_Ability InAbility, bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.SetAbilityActive"));
    struct Params_SetAbilityActive {
        EEnemy_Ability InAbility; // 0x0
        bool bActive; // 0x1
    }; // Size: 0x2
    Params_SetAbilityActive params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
void UDynamicBranchComponent::ClearAbilitySupported(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.ClearAbilitySupported"));
    struct Params_ClearAbilitySupported {
        EEnemy_Ability InAbility; // 0x0
    }; // Size: 0x1
    Params_ClearAbilitySupported params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
}
bool UDynamicBranchComponent::IsAbilityActive(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.IsAbilityActive"));
    struct Params_IsAbilityActive {
        EEnemy_Ability InAbility; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAbilityActive params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicBranchComponent::IsAbilitySupported(EEnemy_Ability InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicBranchComponent.IsAbilitySupported"));
    struct Params_IsAbilitySupported {
        EEnemy_Ability InAbility; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAbilitySupported params{};
    params.InAbility = (EEnemy_Ability)InAbility;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
