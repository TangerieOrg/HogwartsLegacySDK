#pragma once
#include <cstdint>
#include "UNPC_MobilitySpeedChoice.hpp"
#pragma pack(push, 1)
class UWolf_FollowOwnerSpeedChoice : public UNPC_MobilitySpeedChoice {
public:
    float DistanceFromOwnerTrotThreshold; // 0x28
    float UpdateTimeDelta; // 0x2c
    float UpdateTimeDeltaRandomNudge; // 0x30
    char pad_34[0x4];
    static UWolf_FollowOwnerSpeedChoice* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
