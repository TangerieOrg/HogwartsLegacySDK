#pragma once
#include <cstdint>
#include "FSavePrimitiveRenderCustomDepth.hpp"
#pragma pack(push, 1)
struct FSavePrimitiveRenderCustomDepthOwner : public FSavePrimitiveRenderCustomDepth {
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
