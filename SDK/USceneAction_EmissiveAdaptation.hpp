#pragma once
#include <cstdint>
#include "FRenderSettingsEmissiveAdaptation.hpp"
#include "USceneAction_EmissiveAdaptationBase.hpp"
#pragma pack(push, 1)
class USceneAction_EmissiveAdaptation : public USceneAction_EmissiveAdaptationBase {
public:
    FRenderSettingsEmissiveAdaptation EmissiveAdaptation; // 0xd8
    static USceneAction_EmissiveAdaptation* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
