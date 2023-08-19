#include "AActor.hpp"
#include "AEnemyAIWeapon.hpp"
#include "EEnemy_WeaponReleaseType.hpp"
#include "FGameplayTagContainer.hpp"
#include "FRotator.hpp"
#include "FSpawnStoredWeaponStr.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UClass.hpp"
#include "UDataTable.hpp"
#include "UEnemyAIAttackData.hpp"
#include "UEnemyAIComponent.hpp"
#include "UEnemy_AttackComponent.hpp"
#include "UEnemy_WeaponComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UNPC_Component.hpp"
bool UEnemy_WeaponComponent::IsRequiredWeaponActive(UEnemyAIAttackData* AttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.IsRequiredWeaponActive"));
    struct Params_IsRequiredWeaponActive {
        UEnemyAIAttackData* AttackPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRequiredWeaponActive params{};
    params.AttackPtr = (UEnemyAIAttackData*)AttackPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemy_WeaponComponent::StoreWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.StoreWeapon"));
    struct Params_StoreWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StoreWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::SetRecoverSecondaryWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetRecoverSecondaryWeapon"));
    struct Params_SetRecoverSecondaryWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_SetRecoverSecondaryWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
UEnemy_WeaponComponent* UEnemy_WeaponComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_WeaponComponent");
    return (UEnemy_WeaponComponent*)res;
}
void UEnemy_WeaponComponent::ReleaseWeaponType(AEnemyAIWeapon* InWeaponPtr, EEnemy_WeaponReleaseType InReleaseType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.ReleaseWeaponType"));
    struct Params_ReleaseWeaponType {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        EEnemy_WeaponReleaseType InReleaseType; // 0x8
    }; // Size: 0x9
    Params_ReleaseWeaponType params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    params.InReleaseType = (EEnemy_WeaponReleaseType)InReleaseType;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::SetWeaponToRecover(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetWeaponToRecover"));
    struct Params_SetWeaponToRecover {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_SetWeaponToRecover params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::AcquireShield(AEnemyAIWeapon* InShieldPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.AcquireShield"));
    struct Params_AcquireShield {
        AEnemyAIWeapon* InShieldPtr; // 0x0
    }; // Size: 0x8
    Params_AcquireShield params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::ThrowWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.ThrowWeapon"));
    struct Params_ThrowWeapon {
    }; // Size: 0x0
    Params_ThrowWeapon params{};
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::SetSpawnEnable(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetSpawnEnable"));
    struct Params_SetSpawnEnable {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_SetSpawnEnable params{};
    params.Flag = (bool)Flag;
    ProcessEvent(func, &params);
}
AEnemyAIWeapon* UEnemy_WeaponComponent::SpawnWeapon(UClass* SpawnWeaponClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SpawnWeapon"));
    struct Params_SpawnWeapon {
        UClass* SpawnWeaponClass; // 0x0
        AEnemyAIWeapon* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SpawnWeapon params{};
    params.SpawnWeaponClass = (UClass*)SpawnWeaponClass;
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
void UEnemy_WeaponComponent::SetWeaponToAcquire(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetWeaponToAcquire"));
    struct Params_SetWeaponToAcquire {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_SetWeaponToAcquire params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::EnableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.EnableShieldCollision"));
    struct Params_EnableShieldCollision {
    }; // Size: 0x0
    Params_EnableShieldCollision params{};
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::SetWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetWeapon"));
    struct Params_SetWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_SetWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::HasShield() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.HasShield"));
    struct Params_HasShield {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasShield params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::SetShieldToAcquire(AEnemyAIWeapon* InShieldPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetShieldToAcquire"));
    struct Params_SetShieldToAcquire {
        AEnemyAIWeapon* InShieldPtr; // 0x0
    }; // Size: 0x8
    Params_SetShieldToAcquire params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::SetShieldSpellDeflectionIfEquipped(bool bShouldDeflect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetShieldSpellDeflectionIfEquipped"));
    struct Params_SetShieldSpellDeflectionIfEquipped {
        bool bShouldDeflect; // 0x0
    }; // Size: 0x1
    Params_SetShieldSpellDeflectionIfEquipped params{};
    params.bShouldDeflect = (bool)bShouldDeflect;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::SetShield(AEnemyAIWeapon* InShieldPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetShield"));
    struct Params_SetShield {
        AEnemyAIWeapon* InShieldPtr; // 0x0
    }; // Size: 0x8
    Params_SetShield params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::SetRecoverWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.SetRecoverWeapon"));
    struct Params_SetRecoverWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_SetRecoverWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::CanAnyStoredWeaponBeThrown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.CanAnyStoredWeaponBeThrown"));
    struct Params_CanAnyStoredWeaponBeThrown {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanAnyStoredWeaponBeThrown params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::RespawnWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.RespawnWeapon"));
    struct Params_RespawnWeapon {
    }; // Size: 0x0
    Params_RespawnWeapon params{};
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::RemoveStoredWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.RemoveStoredWeapon"));
    struct Params_RemoveStoredWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_RemoveStoredWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::DisableShieldCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DisableShieldCollision"));
    struct Params_DisableShieldCollision {
    }; // Size: 0x0
    Params_DisableShieldCollision params{};
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::ReleaseWeapon(AEnemyAIWeapon* InWeaponPtr, bool bForceDestroy, bool bSetDropVel, bool bIsThrown, bool bForceDrop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.ReleaseWeapon"));
    struct Params_ReleaseWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool bForceDestroy; // 0x8
        bool bSetDropVel; // 0x9
        bool bIsThrown; // 0xa
        bool bForceDrop; // 0xb
    }; // Size: 0xc
    Params_ReleaseWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    params.bForceDestroy = (bool)bForceDestroy;
    params.bSetDropVel = (bool)bSetDropVel;
    params.bIsThrown = (bool)bIsThrown;
    params.bForceDrop = (bool)bForceDrop;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::AcquireWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.AcquireWeapon"));
    struct Params_AcquireWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_AcquireWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
UClass* UEnemy_WeaponComponent::GetStoreWeaponClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetStoreWeaponClass"));
    struct Params_GetStoreWeaponClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetStoreWeaponClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
void UEnemy_WeaponComponent::ReleaseShield(AEnemyAIWeapon* InShieldPtr, bool bSetDropVel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.ReleaseShield"));
    struct Params_ReleaseShield {
        AEnemyAIWeapon* InShieldPtr; // 0x0
        bool bSetDropVel; // 0x8
    }; // Size: 0x9
    Params_ReleaseShield params{};
    params.InShieldPtr = (AEnemyAIWeapon*)InShieldPtr;
    params.bSetDropVel = (bool)bSetDropVel;
    ProcessEvent(func, &params);
}
void UEnemy_WeaponComponent::DisableWeaponCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DisableWeaponCollision"));
    struct Params_DisableWeaponCollision {
    }; // Size: 0x0
    Params_DisableWeaponCollision params{};
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::IsWeaponStored(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.IsWeaponStored"));
    struct Params_IsWeaponStored {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsWeaponStored params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetStoredWeapon(TArray<UClass*>& WeaponClassList, bool bGetFirstMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetStoredWeapon"));
    struct Params_GetStoredWeapon {
        TArray<UClass*> WeaponClassList; // 0x0
        bool bGetFirstMatch; // 0x10
        char pad_11[0x7];
        AEnemyAIWeapon* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetStoredWeapon params{};
    params.WeaponClassList = (TArray<UClass*>)WeaponClassList;
    params.bGetFirstMatch = (bool)bGetFirstMatch;
    ProcessEvent(func, &params);
    WeaponClassList = params.WeaponClassList;
    return (AEnemyAIWeapon*)params.ReturnValue;
}
bool UEnemy_WeaponComponent::IsRequiredWeaponStored(UEnemyAIAttackData* AttackPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.IsRequiredWeaponStored"));
    struct Params_IsRequiredWeaponStored {
        UEnemyAIAttackData* AttackPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRequiredWeaponStored params{};
    params.AttackPtr = (UEnemyAIAttackData*)AttackPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UEnemy_WeaponComponent::DisarmShield(float ScaleForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DisarmShield"));
    struct Params_DisarmShield {
        float ScaleForce; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DisarmShield params{};
    params.ScaleForce = (float)ScaleForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UEnemy_WeaponComponent::HideActiveWeapon(bool bHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.HideActiveWeapon"));
    struct Params_HideActiveWeapon {
        bool bHide; // 0x0
    }; // Size: 0x1
    Params_HideActiveWeapon params{};
    params.bHide = (bool)bHide;
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::HasWeaponToRecover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.HasWeaponToRecover"));
    struct Params_HasWeaponToRecover {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasWeaponToRecover params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::EnableWeaponCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.EnableWeaponCollision"));
    struct Params_EnableWeaponCollision {
    }; // Size: 0x0
    Params_EnableWeaponCollision params{};
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::HasWeaponToAcquire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.HasWeaponToAcquire"));
    struct Params_HasWeaponToAcquire {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasWeaponToAcquire params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UEnemy_WeaponComponent::DisarmWeaponToRecover(float ScaleForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DisarmWeaponToRecover"));
    struct Params_DisarmWeaponToRecover {
        float ScaleForce; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DisarmWeaponToRecover params{};
    params.ScaleForce = (float)ScaleForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UEnemy_WeaponComponent::HasWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.HasWeapon"));
    struct Params_HasWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UClass* UEnemy_WeaponComponent::GetShieldWeaponClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetShieldWeaponClass"));
    struct Params_GetShieldWeaponClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetShieldWeaponClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
bool UEnemy_WeaponComponent::HasStoredWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.HasStoredWeapon"));
    struct Params_HasStoredWeapon {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasStoredWeapon params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::DisableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DisableProvidedWeaponCollision"));
    struct Params_DisableProvidedWeaponCollision {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_DisableProvidedWeaponCollision params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetWeaponToRecover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetWeaponToRecover"));
    struct Params_GetWeaponToRecover {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWeaponToRecover params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
FGameplayTagContainer UEnemy_WeaponComponent::GetEnemyWeaponTagContainer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetEnemyWeaponTagContainer"));
    struct Params_GetEnemyWeaponTagContainer {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetEnemyWeaponTagContainer params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetWeaponToAcquire() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetWeaponToAcquire"));
    struct Params_GetWeaponToAcquire {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWeaponToAcquire params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
float UEnemy_WeaponComponent::GetWeaponRequiredPercent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetWeaponRequiredPercent"));
    struct Params_GetWeaponRequiredPercent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetWeaponRequiredPercent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UEnemy_WeaponComponent::ActivateRequiredWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.ActivateRequiredWeapon"));
    struct Params_ActivateRequiredWeapon {
    }; // Size: 0x0
    Params_ActivateRequiredWeapon params{};
    ProcessEvent(func, &params);
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetRecoverSecondaryWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetRecoverSecondaryWeapon"));
    struct Params_GetRecoverSecondaryWeapon {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRecoverSecondaryWeapon params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetWeapon"));
    struct Params_GetWeapon {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWeapon params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetTransientWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetTransientWeapon"));
    struct Params_GetTransientWeapon {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTransientWeapon params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
UClass* UEnemy_WeaponComponent::GetSpawnWeaponClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetSpawnWeaponClass"));
    struct Params_GetSpawnWeaponClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpawnWeaponClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
UClass* UEnemy_WeaponComponent::GetRespawnWeaponClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetRespawnWeaponClass"));
    struct Params_GetRespawnWeaponClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRespawnWeaponClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
AEnemyAIWeapon* UEnemy_WeaponComponent::GetRecoverWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetRecoverWeapon"));
    struct Params_GetRecoverWeapon {
        AEnemyAIWeapon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRecoverWeapon params{};
    ProcessEvent(func, &params);
    return (AEnemyAIWeapon*)params.ReturnValue;
}
UInteractionArchitectAsset* UEnemy_WeaponComponent::GetEnemyWeaponDataAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.GetEnemyWeaponDataAsset"));
    struct Params_GetEnemyWeaponDataAsset {
        UInteractionArchitectAsset* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEnemyWeaponDataAsset params{};
    ProcessEvent(func, &params);
    return (UInteractionArchitectAsset*)params.ReturnValue;
}
void UEnemy_WeaponComponent::FireWeaponAOE1(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.FireWeaponAOE1"));
    struct Params_FireWeaponAOE1 {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_FireWeaponAOE1 params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::FindAvailableStoredWeaponSocket(AEnemyAIWeapon* InWeaponPtr, FName& OutSocketName, FVector& OutSocketTranslationOffset, FRotator& OutSocketRotationOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.FindAvailableStoredWeaponSocket"));
    struct Params_FindAvailableStoredWeaponSocket {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        FName OutSocketName; // 0x8
        FVector OutSocketTranslationOffset; // 0x10
        FRotator OutSocketRotationOffset; // 0x1c
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_FindAvailableStoredWeaponSocket params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    params.OutSocketName = (FName)OutSocketName;
    params.OutSocketTranslationOffset = (FVector)OutSocketTranslationOffset;
    params.OutSocketRotationOffset = (FRotator)OutSocketRotationOffset;
    ProcessEvent(func, &params);
    OutSocketName = params.OutSocketName;
    OutSocketTranslationOffset = params.OutSocketTranslationOffset;
    OutSocketRotationOffset = params.OutSocketRotationOffset;
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::EnableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.EnableProvidedWeaponCollision"));
    struct Params_EnableProvidedWeaponCollision {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
    }; // Size: 0x8
    Params_EnableProvidedWeaponCollision params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
}
AActor* UEnemy_WeaponComponent::DisarmWeapon(float ScaleForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DisarmWeapon"));
    struct Params_DisarmWeapon {
        float ScaleForce; // 0x0
        char pad_4[0x4];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DisarmWeapon params{};
    params.ScaleForce = (float)ScaleForce;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UEnemy_WeaponComponent::DeathSpawnWeapon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.DeathSpawnWeapon"));
    struct Params_DeathSpawnWeapon {
    }; // Size: 0x0
    Params_DeathSpawnWeapon params{};
    ProcessEvent(func, &params);
}
bool UEnemy_WeaponComponent::CanStoreWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.CanStoreWeapon"));
    struct Params_CanStoreWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanStoreWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UEnemy_WeaponComponent::CanPerceiveThisWeapon(AEnemyAIWeapon* InWeaponPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.CanPerceiveThisWeapon"));
    struct Params_CanPerceiveThisWeapon {
        AEnemyAIWeapon* InWeaponPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanPerceiveThisWeapon params{};
    params.InWeaponPtr = (AEnemyAIWeapon*)InWeaponPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UEnemy_WeaponComponent::AllWeaponsLifetimeToZero() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Enemy_WeaponComponent.AllWeaponsLifetimeToZero"));
    struct Params_AllWeaponsLifetimeToZero {
    }; // Size: 0x0
    Params_AllWeaponsLifetimeToZero params{};
    ProcessEvent(func, &params);
}
