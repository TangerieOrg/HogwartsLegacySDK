#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
struct FCameraData;
#pragma pack(push, 1)
class UBP_AddRotation_C : public UCameraStackBehaviorBlend {
public:
    FRotator RotationDelta; // 0x1b8
    char pad_1c4[0x4];
    static UBP_AddRotation_C* StaticClass();
    bool OnActivateEvent();
    FString OnGetDebugStatsEvent();
    bool OnUpdateEvent(float DeltaSeconds);
    bool OnWriteCameraDataEvent(FCameraData& CameraData);
}; // Size: 0x1c8
#pragma pack(pop)
