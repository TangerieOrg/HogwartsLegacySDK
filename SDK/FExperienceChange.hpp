#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExperienceChange {
    int32_t ExperiencePoints; // 0x0
    int32_t ExperienceLevelStartPoints; // 0x4
    int32_t ExperienceLevelEndPoints; // 0x8
    int32_t ExperienceLevel; // 0xc
    bool ExperienceLevelChanged; // 0x10
    char pad_11[0x3];
    int32_t PreviousExperiencePoints; // 0x14
    int32_t PreviousExperienceLevelStartPoint; // 0x18
    int32_t PreviousExperienceLevelEndPoints; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
