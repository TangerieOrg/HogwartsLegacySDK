#pragma once
#include <cstdint>
#include "AStreamingPlaceholderBase.hpp"
#include "FSpawnSelectInfo.hpp"
class AActor;
#pragma pack(push, 1)
class AStreamingPlaceholderFixedUID : public AStreamingPlaceholderBase {
public:
    FSpawnSelectInfo DbIdInfo; // 0x260
    uint32_t UID; // 0x2e0
    char pad_2e4[0x4];
    AActor* SpawnedActor; // 0x2e8
    static AStreamingPlaceholderFixedUID* StaticClass();
    AActor* GetSpawnedActor();
}; // Size: 0x2f0
#pragma pack(pop)
