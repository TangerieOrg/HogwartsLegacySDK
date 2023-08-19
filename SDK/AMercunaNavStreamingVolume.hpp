#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AMercunaNavStreamingVolume : public AVolume {
public:
    char pad_280[0x28];
    FVector AdditionalLocation; // 0x2a8
    FRotator AdditionalRotation; // 0x2b4
    char pad_2c0[0x8];
    static AMercunaNavStreamingVolume* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
