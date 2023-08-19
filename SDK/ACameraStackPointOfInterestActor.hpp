#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ACameraStackPointOfInterestActor : public AActor {
public:
    float MaxDistance; // 0x248
    char pad_24c[0x4];
    static ACameraStackPointOfInterestActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
