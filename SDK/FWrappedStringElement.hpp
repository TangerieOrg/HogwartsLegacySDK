#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FWrappedStringElement {
    FString Value; // 0x0
    FVector2D LineExtent; // 0x10
}; // Size: 0x18
#pragma pack(pop)
