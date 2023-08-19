#pragma once
#include <cstdint>
#include "USceneAction_AnimatedLightControllerComponent.hpp"
class USceneActionDayNightLightControllerSettings;
#pragma pack(push, 1)
class USceneAction_DayNightLightControllerComponent : public USceneAction_AnimatedLightControllerComponent {
public:
    USceneActionDayNightLightControllerSettings* Settings; // 0xa8
    static USceneAction_DayNightLightControllerComponent* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
