#pragma once
#include <cstdint>
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
class UOverlapEffectsHandlerEffect;
#pragma pack(push, 1)
class UOverlapEffectsHandlerActorClassOverlap : public UOverlapEffectsHandlerMinimumSpeedBase {
public:
    char pad_50[0x28];
    TArray<UOverlapEffectsHandlerEffect*> BeginEffects; // 0x78
    TArray<UOverlapEffectsHandlerEffect*> EndEffects; // 0x88
    static UOverlapEffectsHandlerActorClassOverlap* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
