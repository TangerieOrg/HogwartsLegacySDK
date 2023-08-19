#pragma once
#include <cstdint>
#include "EDisplaceMeshToolDisplaceType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet {
public:
    EDisplaceMeshToolDisplaceType DisplacementType; // 0x60
    char pad_61[0x3];
    float DisplaceIntensity; // 0x64
    int32_t RandomSeed; // 0x68
    int32_t Subdivisions; // 0x6c
    FName WeightMap; // 0x70
    TArray<FString> WeightMapsList; // 0x78
    bool bInvertWeightMap; // 0x88
    bool bDisableSizeWarning; // 0x89
    char pad_8a[0x6];
    static UDisplaceMeshCommonProperties* StaticClass();
    TArray<FString> GetWeightMapsFunc();
}; // Size: 0x90
#pragma pack(pop)
