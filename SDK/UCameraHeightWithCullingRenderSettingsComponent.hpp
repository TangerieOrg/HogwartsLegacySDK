#pragma once
#include <cstdint>
#include "FCameraHeightRenderSettingsCullVolume.hpp"
#include "UCameraHeightRenderSettingsComponent.hpp"
#pragma pack(push, 1)
class UCameraHeightWithCullingRenderSettingsComponent : public UCameraHeightRenderSettingsComponent {
public:
    char pad_af0[0x8];
    TArray<FCameraHeightRenderSettingsCullVolume> SortedCullVolumes; // 0xaf8
    char pad_b08[0x8];
    static UCameraHeightWithCullingRenderSettingsComponent* StaticClass();
}; // Size: 0xb10
#pragma pack(pop)
