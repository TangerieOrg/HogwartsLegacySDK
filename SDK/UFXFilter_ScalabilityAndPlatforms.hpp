#pragma once
#include <cstdint>
#include "EPhoenixScalabilityCategory.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_ScalabilityAndPlatforms : public UFXFilter {
public:
    int32_t Platforms; // 0x30
    EPhoenixScalabilityCategory ScalabilityCategory; // 0x34
    char pad_35[0x3];
    int32_t ScalabilityLevels; // 0x38
    char pad_3c[0x4];
    static UFXFilter_ScalabilityAndPlatforms* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
