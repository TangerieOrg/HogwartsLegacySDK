#pragma once
#include <cstdint>
#include "FDistanceFog.hpp"
#include "UDataAsset.hpp"
class UMaterialParameterCollection;
class UMaterialInterface;
#pragma pack(push, 1)
class UDistanceFogSettings : public UDataAsset {
public:
    UMaterialParameterCollection* DistanceFogMPC; // 0x30
    UMaterialInterface* DistanceFogPPMaterial; // 0x38
    TArray<FDistanceFog> Settings; // 0x40
    static UDistanceFogSettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
