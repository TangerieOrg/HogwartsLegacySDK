#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#pragma pack(push, 1)
struct FDirectionalLightShadowsRelative {
    FAdjustedValueFloat ShadowResolutionScale; // 0x0
    FAdjustedValueFloat ShadowBias; // 0x20
    FAdjustedValueFloat ShadowSlopeBias; // 0x40
    FAdjustedValueFloat ShadowSharpen; // 0x60
    FAdjustedValueFloat ContactShadowLength; // 0x80
    FAdjustedValueFloat ContactShadowLengthWorldSpace; // 0xa0
    FAdjustedValueBoolean bContactShadowLengthInWS; // 0xc0
    FAdjustedValueBoolean bCastVolumetricShadow; // 0xc1
    FAdjustedValueBoolean bCastTranslucentShadows; // 0xc2
    char pad_c3[0x1];
}; // Size: 0xc4
#pragma pack(pop)
