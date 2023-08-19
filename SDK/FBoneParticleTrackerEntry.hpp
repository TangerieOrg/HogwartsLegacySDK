#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBoneParticleTrackerEntry {
    char pad_0[0x10];
    FName AttachBone; // 0x10
}; // Size: 0x18
#pragma pack(pop)
