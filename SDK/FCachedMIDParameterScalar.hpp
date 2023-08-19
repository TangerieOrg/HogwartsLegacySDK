#pragma once
#include <cstdint>
#include "FCachedMIDParameter.hpp"
#pragma pack(push, 1)
struct FCachedMIDParameterScalar : public FCachedMIDParameter {
    float Value; // 0xc
}; // Size: 0x10
#pragma pack(pop)
