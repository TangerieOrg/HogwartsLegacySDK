#pragma once
#include <cstdint>
#include "EARSessionStatus.hpp"
#pragma pack(push, 1)
struct FARSessionStatus {
    FString AdditionalInfo; // 0x0
    EARSessionStatus Status; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
