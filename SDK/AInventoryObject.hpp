#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EInventoryObjectSpawnType.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class AInventoryObject : public AWorldObject {
public:
    char pad_2b0[0x20];
    int32_t UnitCount; // 0x2d0
    bool IsStolen; // 0x2d4
    bool IsUnique; // 0x2d5
    char pad_2d6[0x2];
    FName Variation; // 0x2d8
    int64_t RespawnTime; // 0x2e0
    EInventoryObjectSpawnType SpawnType; // 0x2e8
    char pad_2e9[0x7];
    UAkAudioEvent* m_pickupSfx; // 0x2f0
    FName BeaconableObjectID; // 0x2f8
    char pad_300[0x30];
    static AInventoryObject* StaticClass();
    void SetItemData(FName ItemId, int32_t ItemCount, FName InVariation, bool InIsStolen, bool InIsUnique);
    void OnPickedUpHandlerMulti__DelegateSignature(FName ItemId, int32_t ItemCount);
    void OnPickedUpHandler__DelegateSignature(FName ItemId, int32_t ItemCount);
    void NotifyPickedUp(FName ItemId, int32_t ItemCount);
    void AddPickedUpHandler();
}; // Size: 0x330
#pragma pack(pop)
