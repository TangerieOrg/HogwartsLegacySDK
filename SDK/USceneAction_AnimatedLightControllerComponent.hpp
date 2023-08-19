#pragma once
#include <cstdint>
#include "USceneAction_SpawnActorAllowAsChild.hpp"
class UAnimatedLightsClusterSettings;
#pragma pack(push, 1)
class USceneAction_AnimatedLightControllerComponent : public USceneAction_SpawnActorAllowAsChild {
public:
    UAnimatedLightsClusterSettings* CullingSettings; // 0xa0
    static USceneAction_AnimatedLightControllerComponent* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
