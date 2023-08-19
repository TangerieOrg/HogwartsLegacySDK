#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTraversalMetricsSettings {
    float MaxNormalStepUpHeight; // 0x0
    float MaxHalfMeterStepUpHeight; // 0x4
    float MaxJumpUpOrVaultHeight; // 0x8
    float MaxTwoMeterClimbHeight; // 0xc
    float MaxThreeMeterClimbHeight; // 0x10
    float MaxSwimClimbHeight; // 0x14
    float MaxLandingLeapFrogHeight; // 0x18
    float MaxLandingLedgeWaistHeight; // 0x1c
    float MaxLandingLedgeHangHeight; // 0x20
    float MaxJumpUpLedgeHeight; // 0x24
    float MaxAutoTraverseHeightOnGround; // 0x28
    float MaxAutoTraverseAngle; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
