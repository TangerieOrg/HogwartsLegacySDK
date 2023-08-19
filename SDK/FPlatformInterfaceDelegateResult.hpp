#pragma once
#include <cstdint>
#include "FPlatformInterfaceData.hpp"
#pragma pack(push, 1)
struct FPlatformInterfaceDelegateResult {
    bool bSuccessful; // 0x0
    char pad_1[0x7];
    FPlatformInterfaceData Data; // 0x8
}; // Size: 0x38
#pragma pack(pop)
