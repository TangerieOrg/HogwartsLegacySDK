#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTagAndValue {
    FName Tag; // 0x0
    FString Value; // 0x8
}; // Size: 0x18
#pragma pack(pop)
