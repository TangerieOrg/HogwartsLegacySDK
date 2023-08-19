#pragma once
#include <cstdint>
#include "UOverlapEffectsHandlerEffect.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectHermes : public UOverlapEffectsHandlerEffect {
public:
    FName HermesMessage; // 0x28
    static UOverlapEffectsHandlerEffectHermes* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
