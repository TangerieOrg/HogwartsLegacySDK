#pragma once
#include <cstdint>
#include "ESceneAction_LookAtPriority.hpp"
#include "GazeStatesEnum.hpp"
#include "USceneRigObjectActionBase.hpp"
class UFloatProvider;
class UBoolProvider;
class UTransformProvider;
class UAimEyesData;
#pragma pack(push, 1)
class USceneAction_LookAt : public USceneRigObjectActionBase {
public:
    ESceneAction_LookAtPriority Priority; // 0xa0
    char pad_a1[0x7];
    UFloatProvider* BlendInTime; // 0xa8
    UFloatProvider* BlendOutTime; // 0xb0
    UFloatProvider* TimeDelay; // 0xb8
    UBoolProvider* KeepStateOnCompletion; // 0xc0
    UFloatProvider* HeadLookAtAlpha; // 0xc8
    UTransformProvider* HeadLookAtPlacement; // 0xd0
    UFloatProvider* HeadYawOffset; // 0xd8
    UFloatProvider* HeadPitchOffset; // 0xe0
    UFloatProvider* LoosenessMultiplier; // 0xe8
    UFloatProvider* TrackingSpeedMultiplier; // 0xf0
    UFloatProvider* SpineMobility; // 0xf8
    UBoolProvider* ApplyConstraints; // 0x100
    UFloatProvider* EyeLookAtAlpha; // 0x108
    UBoolProvider* EyeLookAtAdditive; // 0x110
    UTransformProvider* EyeLookAtPlacement; // 0x118
    UFloatProvider* BlinkAlpha; // 0x120
    UBoolProvider* BlinkNow; // 0x128
    UFloatProvider* MicroDartsAlpha; // 0x130
    GazeStatesEnum GazeState; // 0x138
    char pad_139[0x7];
    UFloatProvider* EyeYawOffset; // 0x140
    UFloatProvider* EyePitchOffset; // 0x148
    UAimEyesData* IdleAimEyes; // 0x150
    UAimEyesData* ListeningAimEyes; // 0x158
    UAimEyesData* SpeakingAimEyes; // 0x160
    static USceneAction_LookAt* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
