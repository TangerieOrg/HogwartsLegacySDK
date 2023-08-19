#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#include "FAdjustedValueInt.hpp"
#pragma pack(push, 1)
struct FDirectionalLightCascadedShadowMapsRelative {
    FAdjustedValueFloat DynamicShadowDistanceMovableLight; // 0x0
    FAdjustedValueInt DynamicShadowCascades; // 0x20
    FAdjustedValueFloat CascadeDistributionExponent; // 0x40
    FAdjustedValueFloat CascadeTransitionFraction; // 0x60
    FAdjustedValueFloat ShadowDistanceFadeoutFraction; // 0x80
    FAdjustedValueInt FarShadowCascadeCount; // 0xa0
    FAdjustedValueFloat FarShadowDistance; // 0xc0
    FAdjustedValueFloat CachedDirectionalShadowDistance; // 0xe0
    FAdjustedValueBoolean bUseCachedDirectionalShadowMaps; // 0x100
    char pad_101[0x3];
}; // Size: 0x104
#pragma pack(pop)
