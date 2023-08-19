#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class APrecomputedVisibilityVolume : public AVolume {
public:
    static APrecomputedVisibilityVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
