#include "APawn.hpp"
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
#include "FStationQueryData.hpp"
#include "FStationValidationError.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "PropTypeIDs.hpp"
#include "UActorComponent.hpp"
#include "UBoxComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMesh.hpp"
#include "UStaticMesh.hpp"
#include "UStationComponent.hpp"
#include "UStoryTeller.hpp"
bool UStationComponent::IsStationBreakable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.IsStationBreakable"));
    struct Params_IsStationBreakable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStationBreakable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStationComponent::SetStationActive(bool Inactive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.SetStationActive"));
    struct Params_SetStationActive {
        bool Inactive; // 0x0
    }; // Size: 0x1
    Params_SetStationActive params{};
    params.Inactive = (bool)Inactive;
    ProcessEvent(func, &params);
}
UStationComponent* UStationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationComponent");
    return (UStationComponent*)res;
}
bool UStationComponent::IsABed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.IsABed"));
    struct Params_IsABed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsABed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStationComponent::WillParticipateInSit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.WillParticipateInSit"));
    struct Params_WillParticipateInSit {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_WillParticipateInSit params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStationComponent::IsStationActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.IsStationActive"));
    struct Params_IsStationActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStationActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStationComponent::ValidateStation(TArray<FStationValidationError>& OutErrors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.ValidateStation"));
    struct Params_ValidateStation {
        TArray<FStationValidationError> OutErrors; // 0x0
    }; // Size: 0x10
    Params_ValidateStation params{};
    params.OutErrors = (TArray<FStationValidationError>)OutErrors;
    ProcessEvent(func, &params);
    OutErrors = params.OutErrors;
}
EStationInteraction UStationComponent::GetCurrentInteraction(int32_t InInteractionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetCurrentInteraction"));
    struct Params_GetCurrentInteraction {
        int32_t InInteractionID; // 0x0
        EStationInteraction ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetCurrentInteraction params{};
    params.InInteractionID = (int32_t)InInteractionID;
    ProcessEvent(func, &params);
    return (EStationInteraction)params.ReturnValue;
}
void UStationComponent::SetPropSelection(FString DesiredProp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.SetPropSelection"));
    struct Params_SetPropSelection {
        FString DesiredProp; // 0x0
    }; // Size: 0x10
    Params_SetPropSelection params{};
    params.DesiredProp = (FString)DesiredProp;
    ProcessEvent(func, &params);
}
bool UStationComponent::RequestAssetPreload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.RequestAssetPreload"));
    struct Params_RequestAssetPreload {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RequestAssetPreload params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStationComponent::IsAChair() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.IsAChair"));
    struct Params_IsAChair {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAChair params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStationComponent::IsABookShelf() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.IsABookShelf"));
    struct Params_IsABookShelf {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsABookShelf params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UStationComponent::InitializeStationInteraction(UObject* InObject, EStationInteraction InDesiredInteraction, FStationQueryData& InStationData, bool InDeferred, bool InWantCallback, float InTimeRequest, bool InJustGettingOptions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.InitializeStationInteraction"));
    struct Params_InitializeStationInteraction {
        UObject* InObject; // 0x0
        EStationInteraction InDesiredInteraction; // 0x8
        char pad_9[0x3];
        FStationQueryData InStationData; // 0xc
        bool InDeferred; // 0x2c
        bool InWantCallback; // 0x2d
        char pad_2e[0x2];
        float InTimeRequest; // 0x30
        bool InJustGettingOptions; // 0x34
        char pad_35[0x3];
        int32_t ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_InitializeStationInteraction params{};
    params.InObject = (UObject*)InObject;
    params.InDesiredInteraction = (EStationInteraction)InDesiredInteraction;
    params.InStationData = (FStationQueryData)InStationData;
    params.InDeferred = (bool)InDeferred;
    params.InWantCallback = (bool)InWantCallback;
    params.InTimeRequest = (float)InTimeRequest;
    params.InJustGettingOptions = (bool)InJustGettingOptions;
    ProcessEvent(func, &params);
    InStationData = params.InStationData;
    return (int32_t)params.ReturnValue;
}
bool UStationComponent::GetStationUsers(TArray<UObject*>& outStationUsers) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetStationUsers"));
    struct Params_GetStationUsers {
        TArray<UObject*> outStationUsers; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetStationUsers params{};
    params.outStationUsers = (TArray<UObject*>)outStationUsers;
    ProcessEvent(func, &params);
    outStationUsers = params.outStationUsers;
    return (bool)params.ReturnValue;
}
FTransform UStationComponent::GetSocketTransform(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetSocketTransform"));
    struct Params_GetSocketTransform {
        FName InSocketName; // 0x0
        char pad_8[0x8];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetSocketTransform params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
PropTypeIDs UStationComponent::GetPropType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetPropType"));
    struct Params_GetPropType {
        PropTypeIDs ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPropType params{};
    ProcessEvent(func, &params);
    return (PropTypeIDs)params.ReturnValue;
}
int32_t UStationComponent::GetNumConnections() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetNumConnections"));
    struct Params_GetNumConnections {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumConnections params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FString UStationComponent::GetMeshName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetMeshName"));
    struct Params_GetMeshName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMeshName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMeshComponent* UStationComponent::GetMeshComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetMeshComponent"));
    struct Params_GetMeshComponent {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMeshComponent params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
ECalloutActions UStationComponent::GetInteractionText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetInteractionText"));
    struct Params_GetInteractionText {
        ECalloutActions ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInteractionText params{};
    ProcessEvent(func, &params);
    return (ECalloutActions)params.ReturnValue;
}
FTransform UStationComponent::GetConnectionStartTransform(int32_t InIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetConnectionStartTransform"));
    struct Params_GetConnectionStartTransform {
        int32_t InIndex; // 0x0
        char pad_4[0xc];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetConnectionStartTransform params{};
    params.InIndex = (int32_t)InIndex;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
int32_t UStationComponent::GetClosestConnection(APawn* PlayerPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationComponent.GetClosestConnection"));
    struct Params_GetClosestConnection {
        APawn* PlayerPawn; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetClosestConnection params{};
    params.PlayerPawn = (APawn*)PlayerPawn;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
