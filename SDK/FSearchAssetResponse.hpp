#pragma once
#include <cstdint>
#include "FRCAssetDescription.hpp"
#pragma pack(push, 1)
struct FSearchAssetResponse {
    TArray<FRCAssetDescription> Assets; // 0x0
}; // Size: 0x10
#pragma pack(pop)
