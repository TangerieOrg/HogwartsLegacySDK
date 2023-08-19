#pragma once
#include <cstdint>
#include "FName_GameLogicVarBool.hpp"
#include "UCameraHeightWithCullingRenderSettingsComponent.hpp"
#pragma pack(push, 1)
class UCameraHeightWithPlayerRequirementsRenderSettingsComponent : public UCameraHeightWithCullingRenderSettingsComponent {
public:
    char pad_b10[0x10];
    static UCameraHeightWithPlayerRequirementsRenderSettingsComponent* StaticClass();
}; // Size: 0xb20
#pragma pack(pop)
