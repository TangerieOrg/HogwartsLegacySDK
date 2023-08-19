#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet {
public:
    float LineThickness; // 0x60
    bool bShowHidden; // 0x64
    char pad_65[0x3];
    FColor Color; // 0x68
    char pad_6c[0x4];
    static UCollisionGeometryVisualizationProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
