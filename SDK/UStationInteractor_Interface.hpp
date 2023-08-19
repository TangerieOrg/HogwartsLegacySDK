#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "ESexType.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
class UStationComponent;
struct FStationQueryData;
class AActor;
class ASocialReasoning;
class APawn;
class ACharacter;
#pragma pack(push, 1)
class UStationInteractor_Interface : public UInterface {
public:
    static UStationInteractor_Interface* StaticClass();
    void ThinkNow(FString InReason);
    void StationStoryEndedWithoutConsent(UStationComponent* InStationComponent);
    bool RequestStationInteraction(FStationQueryData& InStationData, float InDuration, bool bUsedInDynamicInteraction, bool OverwritePreviousGoal);
    void RequestStationExit(UStationComponent* InStationComponent);
    bool IsTier4Actor();
    bool IsTier3SeatFiller();
    bool IsTier3Character();
    bool IsPlayer();
    bool IsHidden();
    void InteractionTerminated(UStationComponent* InStationComponent, EEndPlayReason::Type InTerminationReason);
    bool InDynamicInteraction();
    FString GetUniqueName();
    int32_t GetUniqueID();
    float GetSquaredDistanceToPlayer();
    ESexType GetSexType();
    ASocialReasoning* GetReasoning();
    FVector GetPosition();
    APawn* GetPawn();
    FTransform GetInteractorTransform();
    bool GetFleshPrecacheRequested();
    FVector GetFeetPosition();
    FName GetDbSubtypeID();
    FName GetDbRegistryID();
    FName GetDbHouseID();
    UStationComponent* GetCurrentStation();
    float GetCollisionRadius();
    ACharacter* GetCharacter();
    AActor* GetActor();
    void ExitComplete();
    bool CanJoinDynamicInteraction();
    bool CanBeLastOne();
    void AbortInteraction(UStationComponent* InStationComponent);
}; // Size: 0x28
#pragma pack(pop)
