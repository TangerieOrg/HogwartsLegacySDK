#pragma once
#include <cstdint>
#include "EBTDecoratorLogic\Type.hpp"
#pragma pack(push, 1)
struct FBTDecoratorLogic {
    EBTDecoratorLogic::Type Operation; // 0x0
    char pad_1[0x1];
    uint16_t Number; // 0x2
}; // Size: 0x4
#pragma pack(pop)
