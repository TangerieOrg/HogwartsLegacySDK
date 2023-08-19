#pragma once
#include <cstdint>
class UCurveFloat;
#pragma pack(push, 1)
struct FEnemy_AccuracyData {
    float MissThreshold; // 0x0
    float MissOffset; // 0x4
    float NotTargettedMissAdjust; // 0x8
    float RunningAwayMissAdjust; // 0xc
    UCurveFloat* DistFromPlayerCurve; // 0x10
    UCurveFloat* TimeOffscreenCurve; // 0x18
    UCurveFloat* TimeSinceAttackedCurve; // 0x20
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
