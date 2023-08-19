#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FAnimNotifyTrack {
    FName TrackName; // 0x0
    FLinearColor TrackColor; // 0x8
    char pad_18[0x20];
}; // Size: 0x38
#pragma pack(pop)
