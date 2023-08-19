#pragma once
#include <cstdint>
#include "FUniqueNetIdWrapper.hpp"
#pragma pack(push, 1)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper {
    char pad_1[0x17];
    TArray<uint8_t> ReplicationBytes; // 0x18
}; // Size: 0x28
#pragma pack(pop)
