#pragma once
#include <cstdint>
#include "FDatasmithCameraLookatTrackingSettingsTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate {
public:
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
    static UDatasmithCineCameraActorTemplate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
