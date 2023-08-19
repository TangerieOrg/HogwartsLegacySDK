#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightParameterTimeBlendInput : uint8_t {
    TimeOfDay = 0,
    NormalizedTime = 1,
    ELightParameterTimeBlendInput_MAX = 2,
};
#pragma pack(pop)
