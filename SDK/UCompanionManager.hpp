#pragma once
#include <cstdint>
#include "EVoiceOverCompanionSelection.hpp"
#include "EVoiceOverConditions.hpp"
#include "FCompanionSettingData.hpp"
#include "FCompanionVolumeEntry.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UCompanionConfigData;
class UScheduledEntity;
class UClass;
class AActor;
class APawn;
struct FCompanionVolumeSettings;
struct FHitResult;
class AAmbulatory_Character;
struct FCompanionFollowParams;
#pragma pack(push, 1)
class UCompanionManager : public UObject {
public:
    char pad_28[0x40];
    UCompanionConfigData* Config; // 0x68
    char pad_70[0xe8];
    TArray<FCompanionVolumeEntry> CompanionSettingsVolumesPerEntity; // 0x158
    char pad_168[0x90];
    static UCompanionManager* StaticClass();
    static bool TryCompanionTeleportBP(UScheduledEntity* ScheduledEntity, FVector& TargetLocation, FRotator& TargetRotation);
    bool TryCompanionTeleportBehindPlayer();
    void TryCompanionPlayerRescue();
    void StopPrimaryCompanionCustomAbility();
    void StopMovement(bool InStopMovement);
    void StopCompanionForcedWaiting();
    void StartPrimaryCompanionCustomAbility(UClass* Ability);
    void StartFadeOut();
    void StartFadeIn();
    static void SetSystemicCompanionBP(FString Name, bool bEnable);
    static void SetCompanionSettingDataToConfigBP(FString Name);
    static void SetCompanionSettingDataBP(FString Name, FCompanionSettingData InCompanionSettingData);
    void SetCompanionIsIdleFlag(AActor* InCompanionActor, bool InBCompanionIsIdle);
    void SetCompanionForcedWaitLocation(FVector& InWaitLocation, FVector& InWaitDirection);
    static void SetCompanionBP(FString Name, bool bEnable);
    void RestoreCompanionHealth();
    void PlayVoiceOverForPawn(FString VOEventName, APawn* Pawn);
    bool PlayVoiceOver(FString VOEventName, EVoiceOverCompanionSelection Selection, EVoiceOverConditions Condition);
    void OnSaveGameLoaded();
    void OnPlayerEnterLeaveCompanionSettingsVolume(AActor* Volume, FCompanionVolumeSettings& Settings, bool bInside);
    void OnPawnEnterLeaveCompanionSettingsVolume(AActor* Volume, APawn* Pawn, FCompanionVolumeSettings& Settings, bool bInside);
    void OnCompanionRemoved(AActor* Companion);
    void OnCompanionReady(UScheduledEntity* companionScheduledEntity);
    void OnCompanionHealing(AActor* Instigator, float InHealthChange, AActor* TargetActor);
    void OnCompanionDismissed(FName CompanionName);
    void OnCompanionDied(AActor* Companion);
    void OnCompanionDamaged(AActor* InActor, AActor* InInstigator, float InDamage, FHitResult& InHit);
    void OnCharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void OnAboutToSaveGame();
    bool MoveToLocation(FVector InCharacterLocation, APawn* InCompanionPawn);
    static bool IsCompanionWaitingBP(APawn* Pawn, FVector& WaitLocation);
    bool IsCharacterCompanion(UScheduledEntity* entity);
    static TArray<FName> IdentitiesAllowedToAddOnCompanion(FName& InCompanionName);
    bool HasPrimaryFollowingCompanion();
    bool HasPrimaryCompanion();
    bool HasCompanionToRescuePlayer();
    bool HasAnyCompanion();
    void HandleFleshLoaded(AActor* FleshActor);
    static void HandleCompanionInteractionBP(int32_t Index);
    void HandleActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpluse, FHitResult& Hit);
    TArray<FName> GetUnlockedSystemicCompanions();
    APawn* GetPrimaryCompanionPawn();
    FName GetPrimaryCompanionNameBP();
    FString GetForcedCompanionName();
    TArray<FName> GetDisabledSystemicCompanions();
    static bool GetCompanionSettingDataFromActorBP(AActor* companionActor, FCompanionSettingData& OutCompanionSettingData);
    static bool GetCompanionSettingDataBP(FString Name, FCompanionSettingData& OutCompanionSettingData);
    FName GetCompanionNameWithMostCompanionshipTime();
    static UCompanionManager* GetCompanionManager();
    static FString GetCompanionInteractionTextBP(AActor* interactionActor, int32_t Index);
    static bool GetCompanionFollowParamsBP(APawn* Pawn, FCompanionFollowParams& Params);
    TArray<FName> GetAllPossibleSystemicCompanions();
    bool GetActivePrimaryCompanionPawnAndName(APawn*& CompanionPawn, FName& OutCompanionName, bool bIsFemale);
    bool GetActivePrimaryCompanionPawn(APawn*& CompanionPawn);
    static UCompanionManager* Get();
    static void DisableSystemicCompanionsForDungeons(bool bDisable);
    bool ChooseLocation(APawn* InCompanionPawn, FVector& OutDestination);
    void ChangeCompanionInvulnerableBP(FName& InCompanionName, bool InBMakeInvulnerable);
    bool CanSystemicallyCompanionable(FName& InNPCName);
    static bool CanMoveCompanionBP(APawn* Pawn, FCompanionFollowParams& Params);
    void CancelAttackForAllCompanions();
    bool CanAddIdentity(FName& InCompanionName);
    bool AreSystemicCompanionsDisabled();
    void AddIdentityToCompanion(FName& InCompanionName, FName& InIdentityName);
}; // Size: 0x1f8
#pragma pack(pop)
