#pragma once
#include <cstdint>
#include "ULevelSequence.hpp"
#pragma pack(push, 1)
class UControlRigSequence : public ULevelSequence {
public:
    char pad_1c8[0x50];
    float LastExportedFrameRate; // 0x218
    char pad_21c[0x4];
    static UControlRigSequence* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
