#pragma once
#include <cstdint>
#include "EMeshEditingMaterialModes.hpp"
#include "FLinearColor.hpp"
#include "UInteractiveToolPropertySet.hpp"
class UTexture2D;
#pragma pack(push, 1)
class UMeshEditingViewProperties : public UInteractiveToolPropertySet {
public:
    bool bShowWireframe; // 0x60
    char pad_61[0x3];
    EMeshEditingMaterialModes MaterialMode; // 0x64
    bool bFlatShading; // 0x68
    char pad_69[0x3];
    FLinearColor Color; // 0x6c
    char pad_7c[0x4];
    UTexture2D* Image; // 0x80
    static UMeshEditingViewProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
