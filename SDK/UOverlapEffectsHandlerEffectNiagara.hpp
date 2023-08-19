#pragma once
#include <cstdint>
#include "UOverlapEffectsHandlerEffect.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectNiagara : public UOverlapEffectsHandlerEffect {
public:
    char pad_28[0x28];
    UNiagaraComponent* Component; // 0x50
    static UOverlapEffectsHandlerEffectNiagara* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
