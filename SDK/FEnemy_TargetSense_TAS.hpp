#pragma once
#include <cstdint>
class UCurveFloat;
#pragma pack(push, 1)
struct FEnemy_TargetSense_TAS {
    float EventMaintainTime; // 0x0
    float EventAwareAlertValue; // 0x4
    UCurveFloat* EnterAwareDistCurve; // 0x8
    UCurveFloat* EnterAlertDistCurve; // 0x10
    UCurveFloat* ExitAwareDistCurve; // 0x18
    UCurveFloat* ExitAlertDistCurve; // 0x20
}; // Size: 0x28
#pragma pack(pop)
