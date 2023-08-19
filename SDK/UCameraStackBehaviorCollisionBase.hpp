#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCollisionBase : public UCameraStackBehaviorBlend {
public:
    float ProbeSize; // 0x1b8
    float MinArmLengthLimit; // 0x1bc
    ECollisionChannel ProbeChannel; // 0x1c0
    char pad_1c1[0x3];
    float CollisionInterpSpeed; // 0x1c4
    float ReturnInterpSpeed; // 0x1c8
    float MinCameraSpeedToReturn; // 0x1cc
    float MaxCameraSpeedToReturn; // 0x1d0
    bool bDrawDebug; // 0x1d4
    char pad_1d5[0x3b];
    static UCameraStackBehaviorCollisionBase* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
