#pragma once
#include <cstdint>
#include "FDirLightPseudoFadeTimeInterval.hpp"
#include "UBlendableDirLightPseudoFadeIntervalBase.hpp"
#pragma pack(push, 1)
class UBlendableDirLightPseudoFadeTimeInterval : public UBlendableDirLightPseudoFadeIntervalBase {
public:
    FDirLightPseudoFadeTimeInterval Sun; // 0x38
    FDirLightPseudoFadeTimeInterval Moon; // 0x54
    static UBlendableDirLightPseudoFadeTimeInterval* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
