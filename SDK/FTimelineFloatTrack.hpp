#pragma once
#include <cstdint>
class UCurveFloat;
#pragma pack(push, 1)
struct FTimelineFloatTrack {
    UCurveFloat* FloatCurve; // 0x0
    char pad_8[0x10];
    FName TrackName; // 0x18
    FName FloatPropertyName; // 0x20
    char pad_28[0x18];
}; // Size: 0x40
#pragma pack(pop)
