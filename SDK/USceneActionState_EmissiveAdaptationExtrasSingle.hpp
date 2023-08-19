#pragma once
#include <cstdint>
#include "FExposureExpressionsExtras.hpp"
#include "USceneActionState_EmissiveAdaptationBase.hpp"
#pragma pack(push, 1)
class USceneActionState_EmissiveAdaptationExtrasSingle : public USceneActionState_EmissiveAdaptationBase {
public:
    FExposureExpressionsExtras Extras; // 0x68
    static USceneActionState_EmissiveAdaptationExtrasSingle* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
