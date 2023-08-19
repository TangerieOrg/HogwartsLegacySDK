#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#pragma pack(push, 1)
struct FExpHeightFogSecondParametersRelative {
    FAdjustedValueFloat FogDensity; // 0x0
    FAdjustedValueFloat FogHeightFalloff; // 0x20
    FAdjustedValueFloat FogHeightOffset; // 0x40
}; // Size: 0x60
#pragma pack(pop)
