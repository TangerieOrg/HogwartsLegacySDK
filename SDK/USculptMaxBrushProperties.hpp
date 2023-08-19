#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class USculptMaxBrushProperties : public UInteractiveToolPropertySet {
public:
    float MaxHeight; // 0x60
    bool bFreezeCurrentHeight; // 0x64
    char pad_65[0x3];
    static USculptMaxBrushProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
