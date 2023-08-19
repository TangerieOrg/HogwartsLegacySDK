#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "FObjectStateCollisionPair.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
class UObjectStateInfo;
class UContextFilterComponent;
class AActor;
class UUnloadLevelTracker;
class UReparoData;
class ACooldownPickup;
class UCharacterStateInfo;
class ABase_Character;
class UWorld;
#pragma pack(push, 1)
class UObjectStateManager : public UObject {
public:
    char pad_28[0x60];
    TArray<UObjectStateInfo*> OsiActiveList; // 0x88
    TArray<UObjectStateInfo*> OsiInactiveList; // 0x98
    TArray<UObjectStateInfo*> OsiToActivateLater; // 0xa8
    char pad_b8[0xa0];
    TArray<AActor*> PlayerActorList; // 0x158
    TArray<FObjectStateCollisionPair> CollisionPairs; // 0x168
    char pad_178[0xa8];
    UContextFilterComponent* ContextFilterComponent; // 0x220
    char pad_228[0xa0];
    TArray<UUnloadLevelTracker*> UnloadTrackerArray; // 0x2c8
    TArray<ACooldownPickup*> CooldownPickupPool; // 0x2d8
    char pad_2e8[0x48];
    static UObjectStateManager* StaticClass();
    void UpdateOriginalInfo(AActor* InActor);
    void SetOriginalTransform(AActor* InActor, FTransform InTransform);
    void OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason);
    static bool IsRevelioActor(AActor* InActor);
    static void HighlightActorWithRevelio(AActor* InActor, bool bHighlight);
    static UObjectStateManager* GetObjectStateManager(UObject* WorldContext);
    static UObjectStateInfo* GetObjectStateInfo(AActor* InActor);
    static int32_t GetDbUniqueId(AActor* InActor);
    static FName GetDbSubType(AActor* InActor);
    static FName GetDbId(AActor* InActor);
    static FName GetDbClassId(AActor* InActor);
    static UCharacterStateInfo* GetCharacterStateInfo(ABase_Character* InCharacter);
    static UObjectStateManager* Get(UWorld* World);
    static void EnableCcdForXSeconds(AActor* InActor, float Time);
    static bool EnableCcd(AActor* InActor);
    static void EnableAutoRepair(UObject* InObject, float MinRepairDelay, float MaxRepairDelay, UReparoData* ReparoDataOverride);
    static void DisableAutoRepair(UObject* InObject);
}; // Size: 0x330
#pragma pack(pop)
