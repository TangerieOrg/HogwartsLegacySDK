#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet {
public:
    bool bShowMaterial; // 0x60
    char pad_61[0x7];
    static UPolyEditSetUVProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
