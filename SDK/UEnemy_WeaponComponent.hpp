#pragma once
#include <cstdint>
#include "EEnemy_WeaponReleaseType.hpp"
#include "FGameplayTagContainer.hpp"
#include "FSpawnStoredWeaponStr.hpp"
#include "UActorComponent.hpp"
class UDataTable;
class UEnemy_AttackComponent;
class UClass;
class UInteractionArchitectAsset;
class UNPC_Component;
class UEnemyAIComponent;
class AEnemyAIWeapon;
class UEnemyAIAttackData;
struct FVector;
struct FRotator;
class AActor;
#pragma pack(push, 1)
class UEnemy_WeaponComponent : public UActorComponent {
public:
    FName ActiveSocket; // 0xc8
    FName SecondaryActiveSocket; // 0xd0
    bool bCanStoreActiveWeapon; // 0xd8
    char pad_d9[0x7];
    UDataTable* WeaponSocketTable; // 0xe0
    bool bSpawnEnable; // 0xe8
    char pad_e9[0x7];
    TArray<UClass*> SpawnWeaponDataList; // 0xf0
    TArray<FSpawnStoredWeaponStr> SpawnStoredWeaponDataList; // 0x100
    TArray<UClass*> RespawnWeaponDataList; // 0x110
    TArray<UClass*> ShieldWeaponDataList; // 0x120
    TArray<UClass*> DeathWeaponDataList; // 0x130
    int32_t DeathSpawnMax; // 0x140
    int32_t DeathSpawnMin; // 0x144
    TArray<UClass*> DisarmWeaponDataList; // 0x148
    int32_t DisarmSpawnMin; // 0x158
    int32_t DisarmSpawnMax; // 0x15c
    bool bVulnerableWhileDisarmed; // 0x160
    char pad_161[0x7];
    UEnemy_AttackComponent* AttackComp; // 0x168
    UNPC_Component* NPCComp; // 0x170
    UEnemyAIComponent* EnemyComp; // 0x178
    char pad_180[0x240];
    static UEnemy_WeaponComponent* StaticClass();
    void ThrowWeapon();
    bool StoreWeapon(AEnemyAIWeapon* InWeaponPtr);
    AEnemyAIWeapon* SpawnWeapon(UClass* SpawnWeaponClass);
    void SetWeaponToRecover(AEnemyAIWeapon* InWeaponPtr);
    void SetWeaponToAcquire(AEnemyAIWeapon* InWeaponPtr);
    void SetWeapon(AEnemyAIWeapon* InWeaponPtr);
    void SetSpawnEnable(bool Flag);
    void SetShieldToAcquire(AEnemyAIWeapon* InShieldPtr);
    void SetShieldSpellDeflectionIfEquipped(bool bShouldDeflect);
    void SetShield(AEnemyAIWeapon* InShieldPtr);
    void SetRecoverWeapon(AEnemyAIWeapon* InWeaponPtr);
    void SetRecoverSecondaryWeapon(AEnemyAIWeapon* InWeaponPtr);
    void RespawnWeapon();
    void RemoveStoredWeapon(AEnemyAIWeapon* InWeaponPtr);
    void ReleaseWeaponType(AEnemyAIWeapon* InWeaponPtr, EEnemy_WeaponReleaseType InReleaseType);
    void ReleaseWeapon(AEnemyAIWeapon* InWeaponPtr, bool bForceDestroy, bool bSetDropVel, bool bIsThrown, bool bForceDrop);
    void ReleaseShield(AEnemyAIWeapon* InShieldPtr, bool bSetDropVel);
    bool IsWeaponStored(AEnemyAIWeapon* InWeaponPtr);
    bool IsRequiredWeaponStored(UEnemyAIAttackData* AttackPtr);
    bool IsRequiredWeaponActive(UEnemyAIAttackData* AttackPtr);
    void HideActiveWeapon(bool bHide);
    bool HasWeaponToRecover();
    bool HasWeaponToAcquire();
    bool HasWeapon();
    bool HasStoredWeapon();
    bool HasShield();
    AEnemyAIWeapon* GetWeaponToRecover();
    AEnemyAIWeapon* GetWeaponToAcquire();
    float GetWeaponRequiredPercent();
    AEnemyAIWeapon* GetWeapon();
    AEnemyAIWeapon* GetTransientWeapon();
    UClass* GetStoreWeaponClass();
    AEnemyAIWeapon* GetStoredWeapon(TArray<UClass*>& WeaponClassList, bool bGetFirstMatch);
    UClass* GetSpawnWeaponClass();
    UClass* GetShieldWeaponClass();
    UClass* GetRespawnWeaponClass();
    AEnemyAIWeapon* GetRecoverWeapon();
    AEnemyAIWeapon* GetRecoverSecondaryWeapon();
    FGameplayTagContainer GetEnemyWeaponTagContainer();
    UInteractionArchitectAsset* GetEnemyWeaponDataAsset();
    void FireWeaponAOE1(AEnemyAIWeapon* InWeaponPtr);
    bool FindAvailableStoredWeaponSocket(AEnemyAIWeapon* InWeaponPtr, FName& OutSocketName, FVector& OutSocketTranslationOffset, FRotator& OutSocketRotationOffset);
    void EnableWeaponCollision();
    void EnableShieldCollision();
    void EnableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr);
    AActor* DisarmWeaponToRecover(float ScaleForce);
    AActor* DisarmWeapon(float ScaleForce);
    AActor* DisarmShield(float ScaleForce);
    void DisableWeaponCollision();
    void DisableShieldCollision();
    void DisableProvidedWeaponCollision(AEnemyAIWeapon* InWeaponPtr);
    void DeathSpawnWeapon();
    bool CanStoreWeapon(AEnemyAIWeapon* InWeaponPtr);
    bool CanPerceiveThisWeapon(AEnemyAIWeapon* InWeaponPtr);
    bool CanAnyStoredWeaponBeThrown();
    void AllWeaponsLifetimeToZero();
    void ActivateRequiredWeapon();
    void AcquireWeapon(AEnemyAIWeapon* InWeaponPtr);
    void AcquireShield(AEnemyAIWeapon* InShieldPtr);
}; // Size: 0x3c0
#pragma pack(pop)
