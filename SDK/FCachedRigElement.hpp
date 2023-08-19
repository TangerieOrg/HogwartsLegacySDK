#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#pragma pack(push, 1)
struct FCachedRigElement {
    FRigElementKey Key; // 0x0
    uint16_t Index; // 0xc
    char pad_e[0x2];
    int32_t ContainerVersion; // 0x10
}; // Size: 0x14
#pragma pack(pop)
