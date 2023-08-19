#pragma once
#include <cstdint>
#include "ADayNightMasterComputeOnly.hpp"
#pragma pack(push, 1)
class ABP_DayNightComputeOnly_Default_C : public ADayNightMasterComputeOnly {
public:
    static ABP_DayNightComputeOnly_Default_C* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
