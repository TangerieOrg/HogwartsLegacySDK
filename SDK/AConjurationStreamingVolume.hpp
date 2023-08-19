#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class AConjurationStreamingVolume : public AVolume {
public:
    char pad_280[0x10];
    static AConjurationStreamingVolume* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
