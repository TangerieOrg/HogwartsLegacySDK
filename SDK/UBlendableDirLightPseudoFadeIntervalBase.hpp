#pragma once
#include <cstdint>
#include "UBlendableDirLightPseudoFadeBase.hpp"
#pragma pack(push, 1)
class UBlendableDirLightPseudoFadeIntervalBase : public UBlendableDirLightPseudoFadeBase {
public:
    bool bNormalizedTime; // 0x30
    char pad_31[0x7];
    static UBlendableDirLightPseudoFadeIntervalBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
