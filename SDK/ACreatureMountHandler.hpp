#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EHoverDroneControlMode\Type.hpp"
#include "EMountTypes.hpp"
#include "FClothMountTargets.hpp"
#include "FCreatureMountSpawnLocationHandler.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMountCognitionSenseParams.hpp"
#include "FNoMountZoneAvoidanceParams.hpp"
#include "FSpawnSelectInfo.hpp"
class UMaterialInstance;
class UClass;
class USkeletalMesh;
class ACreature_Character;
class UInteractionArchitectAsset;
class AController;
class UPhysicsAsset;
class ACharacter;
class ACreatureMountTransitionActor;
class UCreature_MountLandingDynamics;
#pragma pack(push, 1)
class ACreatureMountHandler : public AActor {
public:
    FSpawnSelectInfo DbIdInfo; // 0x248
    UClass* CreatureClass; // 0x2c8
    USkeletalMesh* CreatureSkeletalMeshPreload; // 0x2d0
    TArray<UMaterialInstance*> CreatureMaterialsPreload; // 0x2d8
    FName MountedStat; // 0x2e8
    UClass* PlayerMountAbility; // 0x2f0
    UClass* RiderPostDismountAbility; // 0x2f8
    UInteractionArchitectAsset* ExistingCreatureInitialInteractionArchitectAsset; // 0x300
    UClass* MountStreamingComponentClass; // 0x308
    UClass* MountHeightLimitComponentClass; // 0x310
    UClass* CreatureRiderComponentClass; // 0x318
    UClass* CreatureMountComponentClass; // 0x320
    UClass* MovementPredictionComponentClass; // 0x328
    UClass* MountedAIControllerClass; // 0x330
    UClass* CreatureMountVFXActorClass; // 0x338
    UInteractionArchitectAsset* MountedReactionsAsset; // 0x340
    UInteractionArchitectAsset* MountedInteractionsAsset; // 0x348
    FGameplayTagContainer ImmunityTagContainer; // 0x350
    FNoMountZoneAvoidanceParams NoMountZoneAvoidanceParams; // 0x370
    char pad_38c[0x4];
    UClass* MountTransitionActorClass; // 0x390
    FName MountTransitionActorAttachSocket; // 0x398
    bool bAdjustSpawnForCollision; // 0x3a0
    char pad_3a1[0xf];
    FCreatureMountSpawnLocationHandler SpawnLocationHandler; // 0x3b0
    EMountTypes CreatureMountType; // 0x450
    char pad_451[0x3];
    FName MountCapsuleName; // 0x454
    char pad_45c[0x4];
    UPhysicsAsset* CreaturePhysicAssetForRiderCloth; // 0x460
    FClothMountTargets ClothMountTargets; // 0x468
    FName LevelScalingOverrideName; // 0x480
    FMountCognitionSenseParams MountCognitionParams; // 0x488
    FMountCognitionSenseParams OriginalBipedCognitionParams; // 0x4a0
    bool bDestroyHandlerAfterDismount; // 0x4b8
    bool bDestroyCreatureAfterDismount; // 0x4b9
    char pad_4ba[0x6];
    ACharacter* RiderCharacter; // 0x4c0
    ACreature_Character* CreatureCharacter; // 0x4c8
    AController* RiderController; // 0x4d0
    AController* PreviousCreatureController; // 0x4d8
    AController* PreviousRiderController; // 0x4e0
    ACreatureMountTransitionActor* MountTransitionActor; // 0x4e8
    char pad_4f0[0x10];
    float ChargeUnavailableMessageTimeout; // 0x500
    float ChargeOnCooldownMessageTimeout; // 0x504
    UCreature_MountLandingDynamics* FlightLandingDynamics; // 0x508
    char pad_510[0x68];
    AActor* CreatureMountVFXActor; // 0x578
    UInteractionArchitectAsset* PreviousMountReactionsAsset; // 0x580
    UInteractionArchitectAsset* PreviousMountInteractionsAsset; // 0x588
    char pad_590[0x60];
    static ACreatureMountHandler* StaticClass();
    bool ToggleCreatureMountCapsule(ACreature_Character* InCreatureCharacter, FName& InName, bool bInEnabled);
    void SpawnAndMountCreature(ACharacter* InRiderCharacter, bool bInUseTransition, bool bInInFlight);
    void PlayerPossessRider();
    void PlayerPossessCreature();
    void OnPostDismountCreature();
    void OnPostCreatureMountSpawn();
    void OnHoverDroneControlModeChanged(EHoverDroneControlMode::Type NewMode);
    void MountExistingCreature(ACharacter* InRiderCharacter, ACreature_Character* InCreatureCharacter);
    bool IsMountType(EMountTypes InType);
    void DismountCreature(bool bInUseTransition);
}; // Size: 0x5f0
#pragma pack(pop)
