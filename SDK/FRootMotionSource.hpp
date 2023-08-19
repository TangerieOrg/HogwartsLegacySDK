#pragma once
#include <cstdint>
#include "ERootMotionAccumulateMode.hpp"
#include "FRootMotionFinishVelocitySettings.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRootMotionSourceSettings.hpp"
#include "FRootMotionSourceStatus.hpp"
#pragma pack(push, 1)
struct FRootMotionSource {
    char pad_0[0x10];
    uint16_t Priority; // 0x10
    uint16_t LocalID; // 0x12
    ERootMotionAccumulateMode AccumulateMode; // 0x14
    char pad_15[0x3];
    FName InstanceName; // 0x18
    float StartTime; // 0x20
    float CurrentTime; // 0x24
    float PreviousTime; // 0x28
    float Duration; // 0x2c
    FRootMotionSourceStatus Status; // 0x30
    FRootMotionSourceSettings Settings; // 0x31
    bool bInLocalSpace; // 0x32
    char pad_33[0xd];
    FRootMotionMovementParams RootMotionParams; // 0x40
    FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
    char pad_94[0xc];
}; // Size: 0xa0
#pragma pack(pop)
