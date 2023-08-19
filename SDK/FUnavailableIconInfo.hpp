#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FUnavailableIconInfo {
    FName IconAssetName; // 0x0
    FName LockId; // 0x8
    FName DescTextKey; // 0x10
}; // Size: 0x18
#pragma pack(pop)
