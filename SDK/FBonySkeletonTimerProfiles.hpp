#pragma once
#include <cstdint>
#include "FBonySkeletonTimerProfile.hpp"
#pragma pack(push, 1)
struct FBonySkeletonTimerProfiles {
    FBonySkeletonTimerProfile DefaultProfile; // 0x0
    TArray<FBonySkeletonTimerProfile> Profiles; // 0x58
}; // Size: 0x68
#pragma pack(pop)
