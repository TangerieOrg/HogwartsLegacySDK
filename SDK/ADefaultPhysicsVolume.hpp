#pragma once
#include <cstdint>
#include "APhysicsVolume.hpp"
#pragma pack(push, 1)
class ADefaultPhysicsVolume : public APhysicsVolume {
public:
    static ADefaultPhysicsVolume* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
