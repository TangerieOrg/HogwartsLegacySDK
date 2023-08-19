#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditOutsetProperties : public UInteractiveToolPropertySet {
public:
    float Softness; // 0x60
    bool bBoundaryOnly; // 0x64
    char pad_65[0x3];
    float AreaScale; // 0x68
    char pad_6c[0x4];
    static UPolyEditOutsetProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
