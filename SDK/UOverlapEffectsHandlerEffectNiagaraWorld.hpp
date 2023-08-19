#pragma once
#include <cstdint>
#include "EOverlapEffectsHitPoint.hpp"
#include "UOverlapEffectsHandlerEffectNiagara.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectNiagaraWorld : public UOverlapEffectsHandlerEffectNiagara {
public:
    EOverlapEffectsHitPoint HitPoint; // 0x58
    bool bOnlyOneEffectActiveAtAnyTime; // 0x59
    char pad_5a[0x6];
    static UOverlapEffectsHandlerEffectNiagaraWorld* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
