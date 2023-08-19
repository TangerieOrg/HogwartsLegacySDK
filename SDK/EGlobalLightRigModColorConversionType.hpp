#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightRigModColorConversionType : uint8_t {
    None = 0,
    ColorTemperatureK = 1,
    BlackBodyK = 2,
    Saturation = 3,
    Brightness = 4,
    EGlobalLightRigModColorConversionType_MAX = 5,
};
#pragma pack(pop)
