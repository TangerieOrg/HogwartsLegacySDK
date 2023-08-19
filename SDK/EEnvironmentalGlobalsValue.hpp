#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentalGlobalsValue : uint8_t {
    DayNight = 0,
    DayNightLerp = 1,
    Day = 2,
    Night = 3,
    SunAltitudeDegrees = 4,
    MoonAltitudeDegrees = 5,
    LightAltitudeDegrees = 6,
    SunUnitIntensity = 7,
    MoonUnitIntensity = 8,
    LightUnitIntensity = 9,
    CameraEyeIndoors = 10,
    CameraEyeProbeIndoors = 11,
    CameraEyeWeatherIndoors = 12,
    Overcast = 13,
    NormalizedTime = 14,
    AverageLuminanceEV100 = 15,
    AutoExposureEV100 = 16,
    BrightnessEV100 = 17,
    PlayerSpeed = 18,
    CameraSpeed = 19,
    CameraAngle = 20,
    SeasonSmooth = 21,
    SeasonLerp = 22,
    Season = 23,
    EEnvironmentalGlobalsValue_MAX = 24,
};
#pragma pack(pop)
