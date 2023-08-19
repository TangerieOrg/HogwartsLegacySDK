#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class AMeshMergeCullingVolume : public AVolume {
public:
    static AMeshMergeCullingVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
