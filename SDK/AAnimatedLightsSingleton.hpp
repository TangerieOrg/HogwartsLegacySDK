#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAnimatedLightWorldData;
#pragma pack(push, 1)
class AAnimatedLightsSingleton : public AActor {
public:
    UAnimatedLightWorldData* WorldData; // 0x248
    static AAnimatedLightsSingleton* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
