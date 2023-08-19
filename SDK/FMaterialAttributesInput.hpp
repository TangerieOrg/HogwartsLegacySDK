#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#pragma pack(push, 1)
struct FMaterialAttributesInput : public FExpressionInput {
    char pad_14[0x4];
    uint64_t PropertyConnectedBitmask; // 0x18
}; // Size: 0x20
#pragma pack(pop)
