#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ACameraBlockingVolume : public AVolume {
public:
    static ACameraBlockingVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
