#pragma once
#include <cstdint>
#include "FDebugCameraControllerSettingsViewModeIndex.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UDebugCameraControllerSettings : public UDeveloperSettings {
public:
    TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
    static UDebugCameraControllerSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
