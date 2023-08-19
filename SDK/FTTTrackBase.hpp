#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTTTrackBase {
    char pad_0[0x8];
    FName TrackName; // 0x8
    bool bIsExternalCurve; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
