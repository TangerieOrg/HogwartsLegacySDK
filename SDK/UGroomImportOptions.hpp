#pragma once
#include <cstdint>
#include "FGroomConversionSettings.hpp"
#include "FHairGroupsInterpolation.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGroomImportOptions : public UObject {
public:
    FGroomConversionSettings ConversionSettings; // 0x28
    TArray<FHairGroupsInterpolation> InterpolationSettings; // 0x40
    static UGroomImportOptions* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
