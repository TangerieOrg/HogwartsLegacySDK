#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETutorialTransparency : uint8_t {
    Tutorial_Transparency_Translucent = 0,
    Tutorial_Transparency_Opaque = 1,
    Tutorial_Transparency_MAX = 2,
};
#pragma pack(pop)
