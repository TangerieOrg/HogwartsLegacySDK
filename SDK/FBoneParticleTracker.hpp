#pragma once
#include <cstdint>
#include "FBoneParticleTrackerEntry.hpp"
#pragma pack(push, 1)
struct FBoneParticleTracker {
    TArray<FBoneParticleTrackerEntry> Entries; // 0x0
}; // Size: 0x10
#pragma pack(pop)
