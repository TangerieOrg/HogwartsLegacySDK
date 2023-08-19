#pragma once
#include <cstdint>
#include "EOverlapEffectsHitPoint.hpp"
#include "FColor.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectDebugHitPoint : public UOverlapEffectsHandlerEffect {
public:
    EOverlapEffectsHitPoint HitPoint; // 0x28
    char pad_29[0x3];
    float SphereRadius; // 0x2c
    FColor SphereColor; // 0x30
    int32_t SphereSegments; // 0x34
    float SphereThickness; // 0x38
    float DurationSeconds; // 0x3c
    bool bEnabled; // 0x40
    char pad_41[0x7];
    static UOverlapEffectsHandlerEffectDebugHitPoint* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
