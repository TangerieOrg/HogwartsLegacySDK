#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class ALightmassImportanceVolume : public AVolume {
public:
    static ALightmassImportanceVolume* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
