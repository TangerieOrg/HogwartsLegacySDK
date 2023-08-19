#pragma once
#include <cstdint>
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FSearchObjectRequest : public FRCRequest {
    FString Query; // 0x68
    FString Class; // 0x78
    FString Outer; // 0x88
    int32_t Limit; // 0x98
    char pad_9c[0x4];
}; // Size: 0xa0
#pragma pack(pop)
