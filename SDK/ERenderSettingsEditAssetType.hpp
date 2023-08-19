#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERenderSettingsEditAssetType {
    Library = 0,
    PostProcessingGroups = 1,
    Exposure = 2,
    ColorGrading = 3,
    DistanceFog = 4,
    EmissiveAdaptation = 5,
    CharacterLightRig = 6,
    Probes = 7,
    ERenderSettingsEditAssetType_MAX = 8,
};
#pragma pack(pop)
