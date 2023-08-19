#pragma once
#include <cstdint>
#include "FVertexInstanceID.hpp"
#pragma pack(push, 1)
struct FVertexIndexAndInstanceID {
    int32_t ContourIndex; // 0x0
    FVertexInstanceID VertexInstanceID; // 0x4
}; // Size: 0x8
#pragma pack(pop)
