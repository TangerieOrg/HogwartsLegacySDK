#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightLightControllerOp : uint8_t {
    Disable = 0,
    SetLightValue = 1,
    ModulateLightValue = 2,
    EDayNightLightControllerOp_MAX = 3,
};
#pragma pack(pop)
