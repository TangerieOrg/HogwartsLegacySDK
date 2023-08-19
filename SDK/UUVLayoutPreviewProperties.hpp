#pragma once
#include <cstdint>
#include "EUVLayoutPreviewSide.hpp"
#include "FVector2D.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet {
public:
    bool bVisible; // 0x60
    char pad_61[0x3];
    float ScaleFactor; // 0x64
    EUVLayoutPreviewSide WhichSide; // 0x68
    bool bShowWireframe; // 0x6c
    char pad_6d[0x3];
    FVector2D Shift; // 0x70
    static UUVLayoutPreviewProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
