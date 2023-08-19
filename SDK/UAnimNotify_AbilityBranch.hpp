#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_AbilityBranch : public UAnimNotify {
public:
    FName Name; // 0x38
    char pad_40[0x50];
    static UAnimNotify_AbilityBranch* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
