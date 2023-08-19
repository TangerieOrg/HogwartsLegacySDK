#pragma once
#include <cstdint>
#include "FDatasmithCameraFilmbackSettingsTemplate.hpp"
#include "FDatasmithCameraFocusSettingsTemplate.hpp"
#include "FDatasmithCameraLensSettingsTemplate.hpp"
#include "FDatasmithPostProcessSettingsTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate {
public:
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
    FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
    FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
    float CurrentFocalLength; // 0x44
    float CurrentAperture; // 0x48
    char pad_4c[0x4];
    FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
    static UDatasmithCineCameraComponentTemplate* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
