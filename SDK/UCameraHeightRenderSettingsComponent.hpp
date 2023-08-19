#pragma once
#include <cstdint>
#include "EWorldBaseHeightAffect.hpp"
#include "URenderSettingsComponent.hpp"
#pragma pack(push, 1)
class UCameraHeightRenderSettingsComponent : public URenderSettingsComponent {
public:
    EWorldBaseHeightAffect Base; // 0xae0
    char pad_ae1[0xf];
    static UCameraHeightRenderSettingsComponent* StaticClass();
}; // Size: 0xaf0
#pragma pack(pop)
