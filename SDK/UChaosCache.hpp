#pragma once
#include <cstdint>
#include "FCacheSpawnableTemplate.hpp"
#include "FGuid.hpp"
#include "FPerParticleCacheData.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UChaosCache : public UObject {
public:
    float RecordedDuration; // 0x28
    uint32_t NumRecordedFrames; // 0x2c
    TArray<int32_t> TrackToParticle; // 0x30
    TArray<FPerParticleCacheData> ParticleTracks; // 0x40
    char pad_50[0xa0];
    FCacheSpawnableTemplate Spawnable; // 0xf0
    FGuid AdapterGuid; // 0x160
    int32_t Version; // 0x170
    char pad_174[0x2c];
    static UChaosCache* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
