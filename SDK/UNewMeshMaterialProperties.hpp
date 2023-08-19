#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet {
public:
    char pad_60[0x8];
    float UVScale; // 0x68
    bool bWorldSpaceUVScale; // 0x6c
    bool bWireframe; // 0x6d
    bool bShowExtendedOptions; // 0x6e
    char pad_6f[0x1];
    static UNewMeshMaterialProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
