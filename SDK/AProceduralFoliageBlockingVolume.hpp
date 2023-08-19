#pragma once
#include <cstdint>
#include "AVolume.hpp"
class AProceduralFoliageVolume;
#pragma pack(push, 1)
class AProceduralFoliageBlockingVolume : public AVolume {
public:
    AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x280
    static AProceduralFoliageBlockingVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
