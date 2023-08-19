#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USeamSculptToolProperties : public UInteractiveToolPropertySet {
public:
    bool bShowWireframe; // 0x60
    bool bHitBackFaces; // 0x61
    char pad_62[0x6];
    static USeamSculptToolProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
