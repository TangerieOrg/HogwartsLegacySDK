#pragma once
#include <cstdint>
#include "FDirLightPseudoFadeCustomBlendableInterval.hpp"
#include "UBlendableDirLightPseudoFadeIntervalBase.hpp"
#pragma pack(push, 1)
class UBlendableDirLightPseudoFadeCustomBlendableInterval : public UBlendableDirLightPseudoFadeIntervalBase {
public:
    FDirLightPseudoFadeCustomBlendableInterval Sun; // 0x38
    FDirLightPseudoFadeCustomBlendableInterval Moon; // 0x78
    static UBlendableDirLightPseudoFadeCustomBlendableInterval* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
