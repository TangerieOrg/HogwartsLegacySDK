#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSkyAtmosphereOverrideDirectionParameters {
    FVector LightDirection0; // 0x0
    FVector LightDirection1; // 0xc
}; // Size: 0x18
#pragma pack(pop)
