#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditInsetProperties : public UInteractiveToolPropertySet {
public:
    bool bReproject; // 0x60
    char pad_61[0x3];
    float Softness; // 0x64
    bool bBoundaryOnly; // 0x68
    char pad_69[0x3];
    float AreaScale; // 0x6c
    static UPolyEditInsetProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
