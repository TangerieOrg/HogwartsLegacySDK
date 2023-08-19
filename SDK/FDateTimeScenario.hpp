#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FDateTimeScenario : public FTableRowBase {
    int32_t Month; // 0x8
    int32_t Day; // 0xc
    int32_t Year; // 0x10
    int32_t Hour; // 0x14
    int32_t Minute; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
