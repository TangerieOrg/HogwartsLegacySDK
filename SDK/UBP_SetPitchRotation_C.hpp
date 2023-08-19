#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
struct FCameraData;
#pragma pack(push, 1)
class UBP_SetPitchRotation_C : public UCameraStackBehaviorBlend {
public:
    float PitchValue; // 0x1b8
    char pad_1bc[0x4];
    static UBP_SetPitchRotation_C* StaticClass();
    bool OnActivateEvent();
    FString OnGetDebugStatsEvent();
    bool OnUpdateEvent(float DeltaSeconds);
    bool OnWriteCameraDataEvent(FCameraData& CameraData, FRotator CallFunc_GetRotation_OutValue, FRotator CallFunc_GetRotation_OutVelocity, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue);
}; // Size: 0x1c0
#pragma pack(pop)
