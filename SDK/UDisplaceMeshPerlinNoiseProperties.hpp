#pragma once
#include <cstdint>
#include "FPerlinLayerProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet {
public:
    TArray<FPerlinLayerProperties> PerlinLayerProperties; // 0x60
    static UDisplaceMeshPerlinNoiseProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
