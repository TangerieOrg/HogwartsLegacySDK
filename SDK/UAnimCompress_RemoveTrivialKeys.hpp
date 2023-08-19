#pragma once
#include <cstdint>
#include "UAnimCompress.hpp"
#pragma pack(push, 1)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress {
public:
    float MaxPosDiff; // 0x40
    float MaxAngleDiff; // 0x44
    float MaxScaleDiff; // 0x48
    char pad_4c[0x4];
    static UAnimCompress_RemoveTrivialKeys* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
