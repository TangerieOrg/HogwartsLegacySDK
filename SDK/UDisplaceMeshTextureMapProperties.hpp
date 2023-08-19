#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet {
public:
    UTexture2D* DisplacementMap; // 0x60
    static UDisplaceMeshTextureMapProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
