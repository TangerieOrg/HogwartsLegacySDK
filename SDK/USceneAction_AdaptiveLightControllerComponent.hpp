#pragma once
#include <cstdint>
#include "FDynamicLightAdaptationSettings.hpp"
#include "USceneAction_AnimatedLightControllerComponent.hpp"
#pragma pack(push, 1)
class USceneAction_AdaptiveLightControllerComponent : public USceneAction_AnimatedLightControllerComponent {
public:
    FDynamicLightAdaptationSettings Settings; // 0xa8
    static USceneAction_AdaptiveLightControllerComponent* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
