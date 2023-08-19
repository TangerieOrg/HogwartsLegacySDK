#pragma once
#include <cstdint>
#include "ECalloutActions.hpp"
#include "EEnterExitAnimVariants.hpp"
#include "ESpawnedStationTypes.hpp"
#include "EStationDataType.hpp"
#include "EStationInteraction.hpp"
#include "EStationPlayerInteractionPermissions.hpp"
#include "EStationSnapConnectionsToGround.hpp"
#include "EVolumeType.hpp"
#include "FDbDoubleColumnInfo.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FStationValidationError.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "PropTypeIDs.hpp"
#include "UActorComponent.hpp"
class UBoxComponent;
class UStaticMesh;
class USkeletalMesh;
class UClass;
class UStoryTeller;
class UPrimitiveComponent;
class UMeshComponent;
class UObject;
struct FStationQueryData;
class APawn;
#pragma pack(push, 1)
class UStationComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    bool IsDeprecated; // 0xd0
    char pad_d1[0x3];
    int32_t m_Version; // 0xd4
    bool m_IsActive; // 0xd8
    EStationDataType Type; // 0xd9
    ESpawnedStationTypes SpawnedStationType; // 0xda
    char pad_db[0x5];
    FDbSingleColumnInfo m_DbLocationID; // 0xe0
    FDbSingleColumnInfo m_DbStudentID; // 0x168
    FDbDoubleColumnInfo StationInfo; // 0x1f0
    FDbSingleColumnInfo StationPropInfo; // 0x2c8
    UStaticMesh* PropStaticMesh; // 0x350
    USkeletalMesh* PropSkeletalMesh; // 0x358
    FDbSingleColumnInfo CollisionType; // 0x360
    bool bDisallowSpellReactions; // 0x3e8
    char pad_3e9[0x7];
    FDbSingleColumnInfo m_DbParentLocationID; // 0x3f0
    bool bGeneratePathing; // 0x478
    char pad_479[0x3];
    float AnimationPickingRange; // 0x47c
    float StitchingActivateRadius; // 0x480
    char pad_484[0x4];
    UStoryTeller* StoryTeller; // 0x488
    uint8_t SetupFlags; // 0x490
    bool EavesdropStation; // 0x491
    bool AllowT4s; // 0x492
    char pad_493[0x5];
    UClass* T4AnimSharingSetupMaleFemale[2]; // 0x498
    bool AllowStitching; // 0x4a8
    bool bEnableIKFloorContact; // 0x4a9
    EStationPlayerInteractionPermissions PIP; // 0x4aa
    uint8_t SetupHouseAndGender; // 0x4ab
    char pad_4ac[0x4];
    TArray<FDbSingleColumnInfo> ProhibitedSubTypes; // 0x4b0
    TArray<FDbSingleColumnInfo> ExclusiveSubTypes; // 0x4c0
    EEnterExitAnimVariants EnterExitAnimations[9]; // 0x4d0
    EStationSnapConnectionsToGround SnapConnectionsToTerrain; // 0x4d9
    bool CreateDynamicObstacle; // 0x4da
    char pad_4db[0x5];
    FDbSingleColumnInfo m_DbReferenceNPCID; // 0x4e0
    ECalloutActions InteractionText; // 0x568
    bool IsVisible; // 0x569
    EVolumeType VolumeType; // 0x56a
    char pad_56b[0x5];
    UPrimitiveComponent* Volume; // 0x570
    uint32_t PatrolStationPriority; // 0x578
    float PatrolStationTime; // 0x57c
    bool LimitPatrolToSingleUsePerCycle; // 0x580
    bool bProhibitAutoLocationSetting; // 0x581
    char pad_582[0x2];
    FVector PlayerInVicinityVolumeExtents; // 0x584
    char pad_590[0x28];
    UBoxComponent* PlayerInVicinityVolume; // 0x5b8
    char pad_5c0[0x10];
    FString PropMeshFullPath; // 0x5d0
    UMeshComponent* MeshComponent; // 0x5e0
    float EnterDelay; // 0x5e8
    float EnterBlendIn; // 0x5ec
    float ExitDelay; // 0x5f0
    float ExitBlendOut; // 0x5f4
    float MaxAnimDriveStiffness; // 0x5f8
    bool ForceParticipateInSit; // 0x5fc
    char pad_5fd[0x12b];
    static UStationComponent* StaticClass();
    bool WillParticipateInSit();
    void ValidateStation(TArray<FStationValidationError>& OutErrors);
    void SetStationActive(bool Inactive);
    void SetPropSelection(FString DesiredProp);
    bool RequestAssetPreload();
    bool IsStationBreakable();
    bool IsStationActive();
    bool IsAChair();
    bool IsABookShelf();
    bool IsABed();
    int32_t InitializeStationInteraction(UObject* InObject, EStationInteraction InDesiredInteraction, FStationQueryData& InStationData, bool InDeferred, bool InWantCallback, float InTimeRequest, bool InJustGettingOptions);
    bool GetStationUsers(TArray<UObject*>& outStationUsers);
    FTransform GetSocketTransform(FName InSocketName);
    PropTypeIDs GetPropType();
    int32_t GetNumConnections();
    FString GetMeshName();
    UMeshComponent* GetMeshComponent();
    ECalloutActions GetInteractionText();
    EStationInteraction GetCurrentInteraction(int32_t InInteractionID);
    FTransform GetConnectionStartTransform(int32_t InIndex);
    int32_t GetClosestConnection(APawn* PlayerPawn);
}; // Size: 0x728
#pragma pack(pop)
