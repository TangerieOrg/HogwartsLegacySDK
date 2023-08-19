#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ABlockingVolume : public AVolume {
public:
    static ABlockingVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
