#pragma once
#include <cstdint>
#include "FDirectionalLightParameters.hpp"
#include "FGlobalLightingDirectionalLightDirection.hpp"
#pragma pack(push, 1)
struct FGlobalLightingDirectionalLightState : public FGlobalLightingDirectionalLightDirection {
    char pad_30[0xe0];
}; // Size: 0x110
#pragma pack(pop)
