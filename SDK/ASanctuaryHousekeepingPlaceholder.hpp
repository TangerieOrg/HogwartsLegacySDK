#pragma once
#include <cstdint>
#include "AStreamingPlaceholderActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDbSingleColumnInfo.hpp"
class UStaticMesh;
class AActor;
class AForagable;
class UObject;
#pragma pack(push, 1)
class ASanctuaryHousekeepingPlaceholder : public AStreamingPlaceholderActor {
public:
    FDbSingleColumnInfo HousekeepingType; // 0x298
    FDbSingleColumnInfo ZoneID; // 0x320
    FDbSingleColumnInfo LockId; // 0x3a8
    FDbSingleColumnInfo LockID2; // 0x430
    uint32_t UID; // 0x4b8
    char pad_4bc[0x4];
    UStaticMesh* StaticMeshOverride; // 0x4c0
    FDbSingleColumnInfo LootID; // 0x4c8
    bool bIsAliveOnFirstLoad; // 0x550
    bool bIsSpawnedInAsOwnActor; // 0x551
    char pad_552[0xe];
    static ASanctuaryHousekeepingPlaceholder* StaticClass();
    void OnForagableCollected(AForagable* Actor);
    void OnChildActorEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason);
    void HandleBreakableDestroyed(UObject* i_caller);
}; // Size: 0x560
#pragma pack(pop)
