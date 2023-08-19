#pragma once
#include <cstdint>
#include "FCachedMIDParameter.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FCachedMIDParameterVector : public FCachedMIDParameter {
    FLinearColor Value; // 0xc
}; // Size: 0x1c
#pragma pack(pop)
