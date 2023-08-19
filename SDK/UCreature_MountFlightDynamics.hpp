#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UCreature_MountFlightDynamics : public UDataAsset {
public:
    float LiftConstant; // 0x30
    float DragConstantParallel; // 0x34
    float DragConstantPerpendicular; // 0x38
    float Thrust; // 0x3c
    FRuntimeFloatCurve SpeedToThrustCurve; // 0x40
    FRuntimeFloatCurve SpeedToMaxThrustCurve; // 0xc8
    float LiftDeltaFromAngleCompensationVerticalWhenAscending; // 0x150
    float LiftDeltaFromAngleCompensationHorizontalWhenAscending; // 0x154
    float LiftDeltaFromAngleCompensationVerticalWhenDescending; // 0x158
    float LiftDeltaFromAngleCompensationHorizontalWhenDescending; // 0x15c
    float LiftDeltaFromSpeedCompensationVertical; // 0x160
    char pad_164[0x4];
    FRuntimeFloatCurve PitchToLiftDeltaFromSpeedCompensationCurve; // 0x168
    float LiftDeltaFromSpeedBaseSpeed; // 0x1f0
    float BrakingStiffness; // 0x1f4
    float MaxBrakingMagnitude; // 0x1f8
    char pad_1fc[0x4];
    FRuntimeFloatCurve DistanceAboveHeightLimitToDownForceCurve; // 0x200
    FRuntimeFloatCurve DesiredYawDeltaToRollCurve; // 0x288
    FRuntimeFloatCurve RollToYawRateFactorCurve; // 0x310
    float MaxRollDegrees; // 0x398
    float MaxPitchDegreesUp; // 0x39c
    float MaxPitchDegreesDown; // 0x3a0
    float MaxTurnRate; // 0x3a4
    FRuntimeFloatCurve RollToMaxPitchUpCurve; // 0x3a8
    FRuntimeFloatCurve RollToMaxPitchDownCurve; // 0x430
    FRotator AngularStiffness; // 0x4b8
    FRotator AngularDampingRatio; // 0x4c4
    FRuntimeFloatCurve SpeedToRollSensitivityCurve; // 0x4d0
    FRuntimeFloatCurve SpeedToPitchSensitivityCurve; // 0x558
    float HoverGaitDragConstantParallelMultiplier; // 0x5e0
    float HoverGaitDragConstantPerpendicularMultiplier; // 0x5e4
    float HoverGaitDragBlendInTime; // 0x5e8
    char pad_5ec[0x4];
    FRuntimeFloatCurve HoverGaitWingPhaseToYawStiffnessMultiplierCurve; // 0x5f0
    FRuntimeFloatCurve HoverGaitWingPhaseToYawDragCurve; // 0x678
    FRuntimeFloatCurve HoverGaitWingPhaseToThrustMultiplierForwardCurve; // 0x700
    FRuntimeFloatCurve HoverGaitWingPhaseToThrustMultiplierUpCurve; // 0x788
    FRuntimeFloatCurve HoverGaitWingPhaseToThrustMultiplierDownCurve; // 0x810
    static UCreature_MountFlightDynamics* StaticClass();
}; // Size: 0x898
#pragma pack(pop)
