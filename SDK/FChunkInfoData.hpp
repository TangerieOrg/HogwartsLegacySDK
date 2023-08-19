#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FSHAHashData.hpp"
#pragma pack(push, 1)
struct FChunkInfoData {
    FGuid Guid; // 0x0
    uint64_t Hash; // 0x10
    FSHAHashData ShaHash; // 0x18
    char pad_2c[0x4];
    int64_t FileSize; // 0x30
    uint8_t GroupNumber; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
