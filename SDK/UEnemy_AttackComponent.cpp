#include "FEnemyAIChosenAttackData.hpp"
#include "FEnemy_SpellOverrides.hpp"
#include "FEnemy_UnblockableData.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#include "UBehaviorTree.hpp"
#include "UCurveFloat.hpp"
#include "UEnemyAIAttackData.hpp"
#include "UEnemy_AttackComponent.hpp"
#include "UFunction.hpp"
FEnemy_UnblockableData UEnemy_AttackComponent::GetAttackUnblockableData(UEnemyAIAttackData* attackDataPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.GetAttackUnblockableData"));
    struct Params_GetAttackUnblockableData {
        UEnemyAIAttackData* attackDataPtr; // 0x0
        FEnemy_UnblockableData ReturnValue; // 0x8
    }; // Size: 0xa
    Params_GetAttackUnblockableData params{};
    params.attackDataPtr = (UEnemyAIAttackData*)attackDataPtr;
    ProcessEvent(func, &params);
    return (FEnemy_UnblockableData)params.ReturnValue;
}
void UEnemy_AttackComponent::AddSelectionTags(FGameplayTagContainer& InTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.AddSelectionTags"));
    struct Params_AddSelectionTags {
        FGameplayTagContainer InTags; // 0x0
    }; // Size: 0x20
    Params_AddSelectionTags params{};
    params.InTags = (FGameplayTagContainer)InTags;
    ProcessEvent(func, &params);
    InTags = params.InTags;
}
UEnemy_AttackComponent* UEnemy_AttackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_AttackComponent");
    return (UEnemy_AttackComponent*)res;
}
void UEnemy_AttackComponent::RemoveSelectionTags(FGameplayTagContainer& InTags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.RemoveSelectionTags"));
    struct Params_RemoveSelectionTags {
        FGameplayTagContainer InTags; // 0x0
    }; // Size: 0x20
    Params_RemoveSelectionTags params{};
    params.InTags = (FGameplayTagContainer)InTags;
    ProcessEvent(func, &params);
    InTags = params.InTags;
}
void UEnemy_AttackComponent::RemoveSelectionTag(FGameplayTag& InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.RemoveSelectionTag"));
    struct Params_RemoveSelectionTag {
        FGameplayTag InTag; // 0x0
    }; // Size: 0x8
    Params_RemoveSelectionTag params{};
    params.InTag = (FGameplayTag)InTag;
    ProcessEvent(func, &params);
    InTag = params.InTag;
}
bool UEnemy_AttackComponent::HasSelectionTag(FGameplayTag& InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.HasSelectionTag"));
    struct Params_HasSelectionTag {
        FGameplayTag InTag; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasSelectionTag params{};
    params.InTag = (FGameplayTag)InTag;
    ProcessEvent(func, &params);
    InTag = params.InTag;
    return (bool)params.ReturnValue;
}
bool UEnemy_AttackComponent::IsAttackAllowed(UEnemyAIAttackData* AttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.IsAttackAllowed"));
    struct Params_IsAttackAllowed {
        UEnemyAIAttackData* AttackPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsAttackAllowed params{};
    params.AttackPtr = (UEnemyAIAttackData*)AttackPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemy_AttackComponent::HasChosenAttack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.HasChosenAttack"));
    struct Params_HasChosenAttack {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasChosenAttack params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FEnemyAIChosenAttackData UEnemy_AttackComponent::GetChosenAttackData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.GetChosenAttackData"));
    struct Params_GetChosenAttackData {
        FEnemyAIChosenAttackData ReturnValue; // 0x0
    }; // Size: 0x78
    Params_GetChosenAttackData params{};
    ProcessEvent(func, &params);
    return (FEnemyAIChosenAttackData)params.ReturnValue;
}
UEnemyAIAttackData* UEnemy_AttackComponent::GetAttackData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.GetAttackData"));
    struct Params_GetAttackData {
        UEnemyAIAttackData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttackData params{};
    ProcessEvent(func, &params);
    return (UEnemyAIAttackData*)params.ReturnValue;
}
void UEnemy_AttackComponent::ClearSelectionTags() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.ClearSelectionTags"));
    struct Params_ClearSelectionTags {
    }; // Size: 0x0
    Params_ClearSelectionTags params{};
    ProcessEvent(func, &params);
}
void UEnemy_AttackComponent::AddSelectionTag(FGameplayTag& InTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AttackComponent.AddSelectionTag"));
    struct Params_AddSelectionTag {
        FGameplayTag InTag; // 0x0
    }; // Size: 0x8
    Params_AddSelectionTag params{};
    params.InTag = (FGameplayTag)InTag;
    ProcessEvent(func, &params);
    InTag = params.InTag;
}
