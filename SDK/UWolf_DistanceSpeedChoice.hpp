#pragma once
#include <cstdint>
#include "UNPC_MobilitySpeedChoice.hpp"
#pragma pack(push, 1)
class UWolf_DistanceSpeedChoice : public UNPC_MobilitySpeedChoice {
public:
    float DistanceFromTargetTrotThreshold; // 0x28
    float DistanceFromPathGoalTrotThreshold; // 0x2c
    float DistanceFromPathGoalToTargetTrotThreshold; // 0x30
    float UpdateTimeDelta; // 0x34
    float UpdateTimeDeltaRandomNudge; // 0x38
    char pad_3c[0x4];
    static UWolf_DistanceSpeedChoice* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
