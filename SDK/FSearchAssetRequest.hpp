#pragma once
#include <cstdint>
#include "FRCAssetFilter.hpp"
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FSearchAssetRequest : public FRCRequest {
    FString Query; // 0x68
    FRCAssetFilter Filter; // 0x78
    int32_t Limit; // 0x100
    char pad_104[0x4];
}; // Size: 0x108
#pragma pack(pop)
