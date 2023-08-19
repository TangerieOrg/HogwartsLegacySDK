#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FAnimGroupInfo {
    FName Name; // 0x0
    FLinearColor Color; // 0x8
}; // Size: 0x18
#pragma pack(pop)
