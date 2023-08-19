#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightRigCurveColorConversionType : uint8_t {
    None = 0,
    ColorTemperatureK = 1,
    BlackBodyK = 2,
    Saturation = 3,
    Brightness = 4,
    ELightRigCurveColorConversionType_MAX = 5,
};
#pragma pack(pop)
