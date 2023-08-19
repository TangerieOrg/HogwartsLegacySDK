#pragma once
#include <cstdint>
#include "FDayNightLightRigState.hpp"
#include "FLightParameterSmoothingTime.hpp"
#pragma pack(push, 1)
struct FDayNightLightRigStateWithTime : public FDayNightLightRigState {
    FLightParameterSmoothingTime Time; // 0x2c8
}; // Size: 0x2e0
#pragma pack(pop)
