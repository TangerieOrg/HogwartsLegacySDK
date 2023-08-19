#pragma once
#include <cstdint>
#include "FResponseChannel.hpp"
#pragma pack(push, 1)
struct FCustomProfile {
    FName Name; // 0x0
    TArray<FResponseChannel> CustomResponses; // 0x8
}; // Size: 0x18
#pragma pack(pop)
