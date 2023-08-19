#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorLookAhead : public UCameraStackBehaviorLookAtBase {
public:
    float TimeAhead; // 0x290
    float VelocityFilterHalflife; // 0x294
    float LocationFilterHalflife; // 0x298
    FCameraOptionName FollowCameraSpeedOptionName; // 0x29c
    bool bDrawDebug; // 0x2a4
    char pad_2a5[0x5b];
    static UCameraStackBehaviorLookAhead* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
