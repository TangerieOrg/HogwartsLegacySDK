#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTraversalDetectionSettings {
    float MinLedgeHeight; // 0x0
    float MaxLedgeHeight; // 0x4
    float SweepRadius; // 0x8
    float SweepDistance; // 0xc
    float SweepLookAheadTime; // 0x10
    float VerticalTrajectoryLookAheadTime; // 0x14
    float LedgeMaxWallAngleToInput; // 0x18
    float LedgeCheckRadius; // 0x1c
    float LedgeCheckHalfHeight; // 0x20
    float LedgeCheckTiltAngle; // 0x24
    float CapsuleSizeCheckRadius; // 0x28
    float CapsuleSizeCheckHalfHeight; // 0x2c
    float CharacterCapsuleDefaultHalfHeight; // 0x30
    float MaxVaultDistance; // 0x34
    float VaultHeightPastObstacle; // 0x38
    float MaxWallHangAngle; // 0x3c
    float BlockingWallStoppingDistance; // 0x40
    float MaxBlockingWallAngle; // 0x44
    float BlockingWallAngleHysteresis; // 0x48
    float BlockingWallCheckMaxWalkableFloorAngle; // 0x4c
}; // Size: 0x50
#pragma pack(pop)
