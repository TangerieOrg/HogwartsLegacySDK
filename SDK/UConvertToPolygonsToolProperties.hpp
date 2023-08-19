#pragma once
#include <cstdint>
#include "EConvertToPolygonsMode.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet {
public:
    EConvertToPolygonsMode ConversionMode; // 0x60
    float AngleTolerance; // 0x64
    bool bCalculateNormals; // 0x68
    bool bShowGroupColors; // 0x69
    char pad_6a[0x6];
    static UConvertToPolygonsToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
