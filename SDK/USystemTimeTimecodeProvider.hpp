#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#include "UTimecodeProvider.hpp"
#pragma pack(push, 1)
class USystemTimeTimecodeProvider : public UTimecodeProvider {
public:
    FFrameRate FrameRate; // 0x30
    bool bGenerateFullFrame; // 0x38
    bool bUseHighPerformanceClock; // 0x39
    char pad_3a[0x6];
    static USystemTimeTimecodeProvider* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
