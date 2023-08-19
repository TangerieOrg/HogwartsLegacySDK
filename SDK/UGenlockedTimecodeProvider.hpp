#pragma once
#include <cstdint>
#include "UTimecodeProvider.hpp"
#pragma pack(push, 1)
class UGenlockedTimecodeProvider : public UTimecodeProvider {
public:
    bool bUseGenlockToCount; // 0x30
    char pad_31[0x27];
    static UGenlockedTimecodeProvider* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
