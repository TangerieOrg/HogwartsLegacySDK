#pragma once
#include <cstdint>
#include "EPhoenixScalabilityCategory.hpp"
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_Scalability : public UFXFilter {
public:
    EPhoenixScalabilityCategory ScalabilityCategory; // 0x30
    char pad_31[0x3];
    int32_t ScalabilityLevels; // 0x34
    static UFXFilter_Scalability* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
