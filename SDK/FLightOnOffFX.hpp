#pragma once
#include <cstdint>
#include "FLightSwitchFX.hpp"
#pragma pack(push, 1)
struct FLightOnOffFX {
    FName Name; // 0x0
    FLightSwitchFX TurnOnFX; // 0x8
    FLightSwitchFX TurnOffFX; // 0x20
}; // Size: 0x38
#pragma pack(pop)
