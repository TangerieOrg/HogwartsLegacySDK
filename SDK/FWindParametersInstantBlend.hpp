#pragma once
#include <cstdint>
#include "FWindParametersInstant.hpp"
#pragma pack(push, 1)
struct FWindParametersInstantBlend : public FWindParametersInstant {
    float Blend; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
