#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMapIconCacheDataTable : public FTableRowBase {
    TArray<FString> Icons; // 0x8
}; // Size: 0x18
#pragma pack(pop)
