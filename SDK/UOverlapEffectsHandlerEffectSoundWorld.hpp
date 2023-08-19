#pragma once
#include <cstdint>
#include "EOverlapEffectsHitPoint.hpp"
#include "UOverlapEffectsHandlerEffectSound.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectSoundWorld : public UOverlapEffectsHandlerEffectSound {
public:
    EOverlapEffectsHitPoint HitPoint; // 0x38
    char pad_39[0x7];
    static UOverlapEffectsHandlerEffectSoundWorld* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
