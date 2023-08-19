#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBandwidthTestGenerator.hpp"
#pragma pack(push, 1)
class ABandwidthTestActor : public AActor {
public:
    FBandwidthTestGenerator BandwidthGenerator; // 0x248
    static ABandwidthTestActor* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
