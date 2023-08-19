#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UBrushBaseProperties : public UInteractiveToolPropertySet {
public:
    float BrushSize; // 0x60
    bool bSpecifyRadius; // 0x64
    char pad_65[0x3];
    float BrushRadius; // 0x68
    float BrushStrength; // 0x6c
    float BrushFalloffAmount; // 0x70
    bool bShowStrength; // 0x74
    bool bShowFalloff; // 0x75
    char pad_76[0x2];
    static UBrushBaseProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
