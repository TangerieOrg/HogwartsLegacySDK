#pragma once
#include <cstdint>
#include "UAnimCompress.hpp"
#pragma pack(push, 1)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress {
public:
    float MaxPosDiff; // 0x40
    float MaxAngleDiff; // 0x44
    float MaxScaleDiff; // 0x48
    float MaxEffectorDiff; // 0x4c
    float MinEffectorDiff; // 0x50
    float EffectorDiffSocket; // 0x54
    float ParentKeyScale; // 0x58
    uint8_t bRetarget : 1; // 0x5c
    uint8_t bActuallyFilterLinearKeys : 1; // 0x5c
    uint8_t pad_bitfield_5c_2 : 6;
    char pad_5d[0x3];
    static UAnimCompress_RemoveLinearKeys* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
