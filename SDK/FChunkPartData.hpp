#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FChunkPartData {
    FGuid Guid; // 0x0
    uint32_t Offset; // 0x10
    uint32_t Size; // 0x14
}; // Size: 0x18
#pragma pack(pop)
