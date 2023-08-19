#pragma once
#include <cstdint>
#include "EEnemy_ParryButtonPressed.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "HouseIds.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UWorld;
class UMeshComponent;
class AActor;
struct FSoftObjectPath;
struct FInventoryResult;
class UForceResidentStreamableRenderAssetCollectionWrapper;
struct FEnemy_ParryWindowEndData;
class UGearAppearanceItemDefinition;
class UObject;
class UActorComponent;
class UStationComponent;
struct FSpellForce;
struct FDamageResult;
struct FEnemy_ParryWindowBeginData;
struct FEnemy_ParryTimeToImpactData;
struct FLockManagerLock;
struct FHitBySpellData;
struct FGameplayTagContainerWrapper;
struct FRuntimeCurveVector;
struct FRuntimeCurveLinearColor;
struct FRuntimeFloatCurve;
class USceneComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UPhoenixBPLibrary : public UBlueprintFunctionLibrary {
public:
    char pad_28[0x18];
    static UPhoenixBPLibrary* StaticClass();
    static void VerifyKey(TArray<FString>& Keys);
    static void SetMeshVisibleInRayTracing(UMeshComponent* MeshComponent, bool bVisibleInRayTracing);
    static void SetActorVisibleInRayTracing(AActor* Actor, bool bVisibleInRayTracing, bool bIncludeChildren);
    static void SetActorId(AActor* Actor, FName ActorId);
    static void MakeSoftObjectReferenceFromPath(FSoftObjectPath& Path);
    static void MakeSoftObjectReference(FString PathString);
    static UForceResidentStreamableRenderAssetCollectionWrapper* LoadGearAppearanceItemDefinitionLODs(UWorld* World, TArray<UGearAppearanceItemDefinition*> GearAppearanceItemDefinitions, bool bIncludeTextures);
    static bool IsRegexMatch(FString Pattern, FString Input);
    static bool IsItemOwned(FString ProductID);
    void HermesStationComponentDelegate__DelegateSignature(UObject* Caller, UStationComponent* StationComponent);
    void HermesSpellForceDelegate__DelegateSignature(UObject* Caller, FSpellForce& SpellForce);
    void HermesReflectAttackDelegate__DelegateSignature(UObject* Caller, FDamageResult& DamageResult);
    void HermesParryWindowEndDelegate__DelegateSignature(UObject* Caller, FEnemy_ParryWindowEndData& ParryWindowEndData);
    void HermesParryWindowBeginDelegate__DelegateSignature(UObject* Caller, FEnemy_ParryWindowBeginData& ParryWindowBeginData);
    void HermesParryTimeToImpactDelegate__DelegateSignature(UObject* Caller, FEnemy_ParryTimeToImpactData& ParryTimeToImpactData);
    void HermesParryEventDelegate__DelegateSignature(UObject* Caller, EEnemy_ParryButtonPressed ButtonPressed);
    void HermesLockDelegate__DelegateSignature(UObject* Caller, FLockManagerLock& Lock);
    void HermesInventoryResultDelegate__DelegateSignature(UObject* Caller, FInventoryResult& InventoryResult);
    static void HermesExecuteOwnedStationComponent(FString Name, UObject* Owner, UObject* Caller, UStationComponent* StationComponent);
    static void HermesExecuteOwnedSpellForce(FString Name, UObject* Owner, UObject* Caller, FSpellForce& SpellForce);
    static void HermesExecuteOwnedReflectAttack(FString Name, UObject* Owner, UObject* Caller, FDamageResult& DamageResult);
    static void HermesExecuteOwnedParryWindowEnd(FString Name, UObject* Owner, UObject* Caller, FEnemy_ParryWindowEndData& ParryWindowEndData);
    static void HermesExecuteOwnedParryWindowBegin(FString Name, UObject* Owner, UObject* Caller, FEnemy_ParryWindowBeginData& ParryWindowBeginData);
    static void HermesExecuteOwnedParryTimeToImpact(FString Name, UObject* Owner, UObject* Caller, FEnemy_ParryTimeToImpactData& ParryTimeToImpactData);
    static void HermesExecuteOwnedParryEvent(FString Name, UObject* Owner, UObject* Caller, EEnemy_ParryButtonPressed ButtonPressed);
    static void HermesExecuteOwnedLock(FString Name, UObject* Owner, UObject* Caller, FLockManagerLock& Lock);
    static void HermesExecuteOwnedInventoryResult(FString Name, UObject* Owner, UObject* Caller, FInventoryResult& InventoryResult);
    static void HermesExecuteOwnedDamageResult(FString Name, UObject* Owner, UObject* Caller, FDamageResult& DamageResult);
    static void HermesExecuteOwnedActorHitBySpell(FString Name, UObject* Owner, UObject* Caller, FHitBySpellData& HitBySpell);
    static void HermesExecuteAllStationComponent(FString Name, UObject* Caller, UStationComponent* StationComponent);
    static void HermesExecuteAllSpellForce(FString Name, UObject* Caller, FSpellForce& SpellForce);
    static void HermesExecuteAllReflectAttack(FString Name, UObject* Caller, FDamageResult& DamageResult);
    static void HermesExecuteAllParryWindowEnd(FString Name, UObject* Caller, FEnemy_ParryWindowEndData& ParryWindowEndData);
    static void HermesExecuteAllParryWindowBegin(FString Name, UObject* Caller, FEnemy_ParryWindowBeginData& ParryWindowBeginData);
    static void HermesExecuteAllParryTimeToImpact(FString Name, UObject* Caller, FEnemy_ParryTimeToImpactData& ParryTimeToImpactData);
    static void HermesExecuteAllParryEvent(FString Name, UObject* Caller, EEnemy_ParryButtonPressed ButtonPressed);
    static void HermesExecuteAllLock(FString Name, UObject* Caller, FLockManagerLock& Lock);
    static void HermesExecuteAllInventoryResult(FString Name, UObject* Caller, FInventoryResult& InventoryResult);
    static void HermesExecuteAllGameplayTags(FString Name, UObject* Caller, FGameplayTagContainerWrapper& Wrapper);
    static void HermesExecuteAllDamageResult(FString Name, UObject* Caller, FDamageResult& DamageResult);
    static void HermesExecuteAllActorHitBySpell(FString Name, UObject* Caller, FHitBySpellData& HitBySpell);
    void HermesDamageResultDelegate__DelegateSignature(UObject* Caller, FDamageResult& DamageResult);
    static void HermesBindStationComponent();
    static void HermesBindSpellForce();
    static void HermesBindReflectAttack();
    static void HermesBindParryWindowEnd();
    static void HermesBindParryWindowBegin();
    static void HermesBindParryTimeToImpact();
    static void HermesBindParryEvent();
    static void HermesBindLock();
    static void HermesBindInventoryResult();
    static void HermesBindDamageResult();
    static void HermesBindActorHitBySpell();
    void HermesActorHitBySpellDelegate__DelegateSignature(UObject* Caller, FHitBySpellData& HitBySpell);
    static FVector GetRuntimeVectorCurveValue(FRuntimeCurveVector& Curve, float Time);
    static FLinearColor GetRuntimeLinearColorCurveValue(FRuntimeCurveLinearColor& Curve, float Time);
    static float GetRuntimeFloatCurveValue(FRuntimeFloatCurve& Curve, float Time);
    static HouseIds GetObjectHouseID(AActor* Actor);
    static HouseIds GetHouseEnumFromHouseID(FString InHouseID);
    static FRotator GetDisillusionmentEyeRotation(FName ParentSocket, USceneComponent* Mesh, FVector& TargetLocation, float MaxHorizontalAngle, float MaxVerticalAngle);
    static FString GetActorName(AActor* Actor);
    static bool GetActorId(AActor* Actor, FName& OutActorId);
    static void ForceUpdateTextureMips(AActor* Actor);
    static void DestroyComponent(UActorComponent* Component, bool bPromoteChildren);
    void CultureChanged();
    static bool ChangeOutfit(AActor* Actor, TArray<FName> GearIDs, TArray<USkeletalMeshComponent*>& OldMeshes, TArray<USkeletalMeshComponent*>& NewMeshes, bool bSkipChangingGear);
    static void CastToWorldSoftObjectReference();
    static void AVATranslateSubtitle(FString Key, FString DebugLogText);
    static void AVATranslate(FString Key, FString DebugLogText);
    static bool AvaIsRunningWithEditor();
    static bool AvaIsRunningCommandlet();
}; // Size: 0x40
#pragma pack(pop)
