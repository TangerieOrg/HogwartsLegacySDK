#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_ByStat : public UBoolProvider {
public:
    FName StatName; // 0x28
    int32_t StatValue; // 0x30
    char pad_34[0x4];
    static UBool_ByStat* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
