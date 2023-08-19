#pragma once
#include <cstdint>
#include "UClothPhysicalMeshDataBase_Legacy.hpp"
#pragma pack(push, 1)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy {
public:
    TArray<float> MaxDistances; // 0xe0
    TArray<float> BackstopDistances; // 0xf0
    TArray<float> BackstopRadiuses; // 0x100
    TArray<float> AnimDriveMultipliers; // 0x110
    static UClothPhysicalMeshDataNv_Legacy* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
