#include "EEnemyAIDodgeState.hpp"
#include "FGameplayTag.hpp"
#include "UEnemyAISpawnData.hpp"
#include "UEnemy_AnimInstance.hpp"
#include "UFunction.hpp"
#include "UNPC_AnimInstance.hpp"
UEnemy_AnimInstance* UEnemy_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_AnimInstance");
    return (UEnemy_AnimInstance*)res;
}
FGameplayTag UEnemy_AnimInstance::GetAttackTypeTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.GetAttackTypeTag"));
    struct Params_GetAttackTypeTag {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttackTypeTag params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
void UEnemy_AnimInstance::SetAttackTypeTag(FGameplayTag InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.SetAttackTypeTag"));
    struct Params_SetAttackTypeTag {
        FGameplayTag InType; // 0x0
    }; // Size: 0x8
    Params_SetAttackTypeTag params{};
    params.InType = (FGameplayTag)InType;
    ProcessEvent(func, &params);
}
void UEnemy_AnimInstance::SetSpawnData(UEnemyAISpawnData* InSpawnDataPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.SetSpawnData"));
    struct Params_SetSpawnData {
        UEnemyAISpawnData* InSpawnDataPtr; // 0x0
    }; // Size: 0x8
    Params_SetSpawnData params{};
    params.InSpawnDataPtr = (UEnemyAISpawnData*)InSpawnDataPtr;
    ProcessEvent(func, &params);
}
void UEnemy_AnimInstance::SetAnimDodgeState(EEnemyAIDodgeState InDodgeState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.SetAnimDodgeState"));
    struct Params_SetAnimDodgeState {
        EEnemyAIDodgeState InDodgeState; // 0x0
    }; // Size: 0x1
    Params_SetAnimDodgeState params{};
    params.InDodgeState = (EEnemyAIDodgeState)InDodgeState;
    ProcessEvent(func, &params);
}
UEnemyAISpawnData* UEnemy_AnimInstance::GetSpawnData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.GetSpawnData"));
    struct Params_GetSpawnData {
        UEnemyAISpawnData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpawnData params{};
    ProcessEvent(func, &params);
    return (UEnemyAISpawnData*)params.ReturnValue;
}
EEnemyAIDodgeState UEnemy_AnimInstance::GetAnimDodgeState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.GetAnimDodgeState"));
    struct Params_GetAnimDodgeState {
        EEnemyAIDodgeState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAnimDodgeState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIDodgeState)params.ReturnValue;
}
bool UEnemy_AnimInstance::CanExitAttackLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.CanExitAttackLoop"));
    struct Params_CanExitAttackLoop {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanExitAttackLoop params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_AnimInstance::AnimNotify_ImpulseToTarget(float ActiveFrames, float DistFromTarget, float MaxTravelDist) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance.AnimNotify_ImpulseToTarget"));
    struct Params_AnimNotify_ImpulseToTarget {
        float ActiveFrames; // 0x0
        float DistFromTarget; // 0x4
        float MaxTravelDist; // 0x8
    }; // Size: 0xc
    Params_AnimNotify_ImpulseToTarget params{};
    params.ActiveFrames = (float)ActiveFrames;
    params.DistFromTarget = (float)DistFromTarget;
    params.MaxTravelDist = (float)MaxTravelDist;
    ProcessEvent(func, &params);
}
