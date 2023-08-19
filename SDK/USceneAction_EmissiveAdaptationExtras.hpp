#pragma once
#include <cstdint>
#include "FExposureExpressionsExtras.hpp"
#include "USceneAction_EmissiveAdaptationBase.hpp"
#pragma pack(push, 1)
class USceneAction_EmissiveAdaptationExtras : public USceneAction_EmissiveAdaptationBase {
public:
    FExposureExpressionsExtras EmissiveAdaptationExtras; // 0xd8
    static USceneAction_EmissiveAdaptationExtras* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
