#pragma once
#include <cstdint>
#include "FDayNightLightRigSetup.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDayNightLightRigState : public FDayNightLightRigSetup {
    FVector Direction; // 0x2b8
    char pad_2c4[0x4];
}; // Size: 0x2c8
#pragma pack(pop)
