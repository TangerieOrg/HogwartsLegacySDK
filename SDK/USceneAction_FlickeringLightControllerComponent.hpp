#pragma once
#include <cstdint>
#include "USceneAction_AnimatedLightControllerComponent.hpp"
class UAnimatedLightSettingsAsset;
#pragma pack(push, 1)
class USceneAction_FlickeringLightControllerComponent : public USceneAction_AnimatedLightControllerComponent {
public:
    UAnimatedLightSettingsAsset* Settings; // 0xa8
    float StartOffset; // 0xb0
    float DurationScale; // 0xb4
    uint8_t bRandomizeStartOffset : 1; // 0xb8
    uint8_t pad_bitfield_b8_1 : 7;
    char pad_b9[0x7];
    static USceneAction_FlickeringLightControllerComponent* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
