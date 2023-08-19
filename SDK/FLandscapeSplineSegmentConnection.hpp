#pragma once
#include <cstdint>
class ULandscapeSplineControlPoint;
#pragma pack(push, 1)
struct FLandscapeSplineSegmentConnection {
    ULandscapeSplineControlPoint* ControlPoint; // 0x0
    float TangentLen; // 0x8
    FName SocketName; // 0xc
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
