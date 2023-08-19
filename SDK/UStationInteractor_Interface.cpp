#include "AActor.hpp"
#include "ACharacter.hpp"
#include "APawn.hpp"
#include "ASocialReasoning.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ESexType.hpp"
#include "FStationQueryData.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UStationComponent.hpp"
#include "UStationInteractor_Interface.hpp"
UStationInteractor_Interface* UStationInteractor_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationInteractor_Interface");
    return (UStationInteractor_Interface*)res;
}
FName UStationInteractor_Interface::GetDbSubtypeID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetDbSubtypeID"));
    struct Params_GetDbSubtypeID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbSubtypeID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UStationInteractor_Interface::ThinkNow(FString InReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.ThinkNow"));
    struct Params_ThinkNow {
        FString InReason; // 0x0
    }; // Size: 0x10
    Params_ThinkNow params{};
    params.InReason = (FString)InReason;
    ProcessEvent(func, &params);
}
bool UStationInteractor_Interface::IsTier3Character() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.IsTier3Character"));
    struct Params_IsTier3Character {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTier3Character params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStationInteractor_Interface::StationStoryEndedWithoutConsent(UStationComponent* InStationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.StationStoryEndedWithoutConsent"));
    struct Params_StationStoryEndedWithoutConsent {
        UStationComponent* InStationComponent; // 0x0
    }; // Size: 0x8
    Params_StationStoryEndedWithoutConsent params{};
    params.InStationComponent = (UStationComponent*)InStationComponent;
    ProcessEvent(func, &params);
}
bool UStationInteractor_Interface::RequestStationInteraction(FStationQueryData& InStationData, float InDuration, bool bUsedInDynamicInteraction, bool OverwritePreviousGoal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.RequestStationInteraction"));
    struct Params_RequestStationInteraction {
        FStationQueryData InStationData; // 0x0
        float InDuration; // 0x20
        bool bUsedInDynamicInteraction; // 0x24
        bool OverwritePreviousGoal; // 0x25
        bool ReturnValue; // 0x26
    }; // Size: 0x27
    Params_RequestStationInteraction params{};
    params.InStationData = (FStationQueryData)InStationData;
    params.InDuration = (float)InDuration;
    params.bUsedInDynamicInteraction = (bool)bUsedInDynamicInteraction;
    params.OverwritePreviousGoal = (bool)OverwritePreviousGoal;
    ProcessEvent(func, &params);
    InStationData = params.InStationData;
    return (bool)params.ReturnValue;
}
void UStationInteractor_Interface::ExitComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.ExitComplete"));
    struct Params_ExitComplete {
    }; // Size: 0x0
    Params_ExitComplete params{};
    ProcessEvent(func, &params);
}
FTransform UStationInteractor_Interface::GetInteractorTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetInteractorTransform"));
    struct Params_GetInteractorTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetInteractorTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
bool UStationInteractor_Interface::IsTier3SeatFiller() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.IsTier3SeatFiller"));
    struct Params_IsTier3SeatFiller {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTier3SeatFiller params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStationInteractor_Interface::RequestStationExit(UStationComponent* InStationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.RequestStationExit"));
    struct Params_RequestStationExit {
        UStationComponent* InStationComponent; // 0x0
    }; // Size: 0x8
    Params_RequestStationExit params{};
    params.InStationComponent = (UStationComponent*)InStationComponent;
    ProcessEvent(func, &params);
}
bool UStationInteractor_Interface::IsTier4Actor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.IsTier4Actor"));
    struct Params_IsTier4Actor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTier4Actor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStationInteractor_Interface::IsPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.IsPlayer"));
    struct Params_IsPlayer {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayer params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UStationInteractor_Interface::GetUniqueID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetUniqueID"));
    struct Params_GetUniqueID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUniqueID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UStationInteractor_Interface::IsHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.IsHidden"));
    struct Params_IsHidden {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHidden params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UStationInteractor_Interface::GetPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetPosition"));
    struct Params_GetPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UStationInteractor_Interface::InteractionTerminated(UStationComponent* InStationComponent, EEndPlayReason::Type InTerminationReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.InteractionTerminated"));
    struct Params_InteractionTerminated {
        UStationComponent* InStationComponent; // 0x0
        EEndPlayReason::Type InTerminationReason; // 0x8
    }; // Size: 0x9
    Params_InteractionTerminated params{};
    params.InStationComponent = (UStationComponent*)InStationComponent;
    params.InTerminationReason = (EEndPlayReason::Type)InTerminationReason;
    ProcessEvent(func, &params);
}
FVector UStationInteractor_Interface::GetFeetPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetFeetPosition"));
    struct Params_GetFeetPosition {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetFeetPosition params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UStationInteractor_Interface::InDynamicInteraction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.InDynamicInteraction"));
    struct Params_InDynamicInteraction {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InDynamicInteraction params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UStationInteractor_Interface::GetUniqueName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetUniqueName"));
    struct Params_GetUniqueName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUniqueName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UStationInteractor_Interface::GetDbHouseID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetDbHouseID"));
    struct Params_GetDbHouseID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbHouseID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
float UStationInteractor_Interface::GetSquaredDistanceToPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetSquaredDistanceToPlayer"));
    struct Params_GetSquaredDistanceToPlayer {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSquaredDistanceToPlayer params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UStationInteractor_Interface::AbortInteraction(UStationComponent* InStationComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.AbortInteraction"));
    struct Params_AbortInteraction {
        UStationComponent* InStationComponent; // 0x0
    }; // Size: 0x8
    Params_AbortInteraction params{};
    params.InStationComponent = (UStationComponent*)InStationComponent;
    ProcessEvent(func, &params);
}
ESexType UStationInteractor_Interface::GetSexType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetSexType"));
    struct Params_GetSexType {
        ESexType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSexType params{};
    ProcessEvent(func, &params);
    return (ESexType)params.ReturnValue;
}
ASocialReasoning* UStationInteractor_Interface::GetReasoning() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetReasoning"));
    struct Params_GetReasoning {
        ASocialReasoning* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReasoning params{};
    ProcessEvent(func, &params);
    return (ASocialReasoning*)params.ReturnValue;
}
APawn* UStationInteractor_Interface::GetPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetPawn"));
    struct Params_GetPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
bool UStationInteractor_Interface::GetFleshPrecacheRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetFleshPrecacheRequested"));
    struct Params_GetFleshPrecacheRequested {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFleshPrecacheRequested params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UStationInteractor_Interface::GetDbRegistryID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetDbRegistryID"));
    struct Params_GetDbRegistryID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbRegistryID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UStationComponent* UStationInteractor_Interface::GetCurrentStation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetCurrentStation"));
    struct Params_GetCurrentStation {
        UStationComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentStation params{};
    ProcessEvent(func, &params);
    return (UStationComponent*)params.ReturnValue;
}
float UStationInteractor_Interface::GetCollisionRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetCollisionRadius"));
    struct Params_GetCollisionRadius {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCollisionRadius params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ACharacter* UStationInteractor_Interface::GetCharacter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetCharacter"));
    struct Params_GetCharacter {
        ACharacter* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCharacter params{};
    ProcessEvent(func, &params);
    return (ACharacter*)params.ReturnValue;
}
AActor* UStationInteractor_Interface::GetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.GetActor"));
    struct Params_GetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
bool UStationInteractor_Interface::CanJoinDynamicInteraction() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.CanJoinDynamicInteraction"));
    struct Params_CanJoinDynamicInteraction {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanJoinDynamicInteraction params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStationInteractor_Interface::CanBeLastOne() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationInteractor_Interface.CanBeLastOne"));
    struct Params_CanBeLastOne {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanBeLastOne params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
