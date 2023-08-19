#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UProceduralFoliageComponent;
#pragma pack(push, 1)
class AProceduralFoliageVolume : public AVolume {
public:
    UProceduralFoliageComponent* ProceduralComponent; // 0x280
    static AProceduralFoliageVolume* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
