#pragma once
#include <cstdint>
#include "EOcclusionOption.hpp"
#include "EOcclusionTestMethod.hpp"
#include "UAnimNotify.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UAnimNotify_AkEvent_Ava : public UAnimNotify {
public:
    UAkAudioEvent* AkAudioEvent; // 0x38
    FName SocketName; // 0x40
    bool bFollow; // 0x48
    char pad_49[0x3];
    float MaxDistanceToListener; // 0x4c
    EOcclusionOption OcclusionOption; // 0x50
    EOcclusionTestMethod OcclusionMethod; // 0x51
    bool bAutoDestroy; // 0x52
    bool bTickSpatialVolumes; // 0x53
    bool bOnlyWhenMovingOnGround; // 0x54
    bool bUseMotionListener; // 0x55
    bool bUsePlayerOrientatedMotionListener; // 0x56
    bool bOnlyPlayer; // 0x57
    static UAnimNotify_AkEvent_Ava* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
