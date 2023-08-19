#include "EEnemyAIAnimTransState\Type.hpp"
#include "FGameplayTag.hpp"
#include "UEnemyAISpawnData.hpp"
#include "UEnemy_AnimInstance_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UEnemy_AnimInstance_Interface* UEnemy_AnimInstance_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_AnimInstance_Interface");
    return (UEnemy_AnimInstance_Interface*)res;
}
void UEnemy_AnimInstance_Interface::SetTransState(EEnemyAIAnimTransState::Type& InState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance_Interface.SetTransState"));
    struct Params_SetTransState {
        EEnemyAIAnimTransState::Type InState; // 0x0
    }; // Size: 0x1
    Params_SetTransState params{};
    params.InState = (EEnemyAIAnimTransState::Type)InState;
    ProcessEvent(func, &params);
    InState = params.InState;
}
void UEnemy_AnimInstance_Interface::SetSpawnData(UEnemyAISpawnData* InSpawnDataPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance_Interface.SetSpawnData"));
    struct Params_SetSpawnData {
        UEnemyAISpawnData* InSpawnDataPtr; // 0x0
    }; // Size: 0x8
    Params_SetSpawnData params{};
    params.InSpawnDataPtr = (UEnemyAISpawnData*)InSpawnDataPtr;
    ProcessEvent(func, &params);
}
void UEnemy_AnimInstance_Interface::SetAttackTypeTag(FGameplayTag InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance_Interface.SetAttackTypeTag"));
    struct Params_SetAttackTypeTag {
        FGameplayTag InType; // 0x0
    }; // Size: 0x8
    Params_SetAttackTypeTag params{};
    params.InType = (FGameplayTag)InType;
    ProcessEvent(func, &params);
}
EEnemyAIAnimTransState::Type UEnemy_AnimInstance_Interface::GetTransState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance_Interface.GetTransState"));
    struct Params_GetTransState {
        EEnemyAIAnimTransState::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTransState params{};
    ProcessEvent(func, &params);
    return (EEnemyAIAnimTransState::Type)params.ReturnValue;
}
UEnemyAISpawnData* UEnemy_AnimInstance_Interface::GetSpawnData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance_Interface.GetSpawnData"));
    struct Params_GetSpawnData {
        UEnemyAISpawnData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpawnData params{};
    ProcessEvent(func, &params);
    return (UEnemyAISpawnData*)params.ReturnValue;
}
FGameplayTag UEnemy_AnimInstance_Interface::GetAttackTypeTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_AnimInstance_Interface.GetAttackTypeTag"));
    struct Params_GetAttackTypeTag {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttackTypeTag params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
