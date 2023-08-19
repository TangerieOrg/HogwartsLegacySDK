#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UGarbageCollectionSettings : public UDeveloperSettings {
public:
    float TimeBetweenPurgingPendingKillObjects; // 0x38
    uint8_t FlushStreamingOnGC : 1; // 0x3c
    uint8_t AllowParallelGC : 1; // 0x3c
    uint8_t IncrementalBeginDestroyEnabled : 1; // 0x3c
    uint8_t MultithreadedDestructionEnabled : 1; // 0x3c
    uint8_t CreateGCClusters : 1; // 0x3c
    uint8_t AssetClusteringEnabled : 1; // 0x3c
    uint8_t ActorClusteringEnabled : 1; // 0x3c
    uint8_t BlueprintClusteringEnabled : 1; // 0x3c
    uint8_t UseDisregardForGCOnDedicatedServers : 1; // 0x3d
    uint8_t pad_bitfield_3d_1 : 7;
    char pad_3e[0x2];
    int32_t MinGCClusterSize; // 0x40
    int32_t NumRetriesBeforeForcingGC; // 0x44
    int32_t MaxObjectsNotConsideredByGC; // 0x48
    int32_t SizeOfPermanentObjectPool; // 0x4c
    int32_t MaxObjectsInGame; // 0x50
    int32_t MaxObjectsInEditor; // 0x54
    static UGarbageCollectionSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
