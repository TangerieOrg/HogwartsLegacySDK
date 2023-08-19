#pragma once
#include <cstdint>
class UCurveLinearColor;
#pragma pack(push, 1)
struct FTimelineLinearColorTrack {
    UCurveLinearColor* LinearColorCurve; // 0x0
    char pad_8[0x10];
    FName TrackName; // 0x18
    FName LinearColorPropertyName; // 0x20
    char pad_28[0x18];
}; // Size: 0x40
#pragma pack(pop)
