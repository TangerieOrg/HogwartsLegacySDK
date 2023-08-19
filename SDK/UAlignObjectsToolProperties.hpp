#pragma once
#include <cstdint>
#include "EAlignObjectsAlignToOptions.hpp"
#include "EAlignObjectsAlignTypes.hpp"
#include "EAlignObjectsBoxPoint.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet {
public:
    EAlignObjectsAlignTypes AlignType; // 0x60
    EAlignObjectsAlignToOptions AlignTo; // 0x64
    EAlignObjectsBoxPoint BoxPosition; // 0x68
    bool bAlignX; // 0x6c
    bool bAlignY; // 0x6d
    bool bAlignZ; // 0x6e
    char pad_6f[0x1];
    static UAlignObjectsToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
