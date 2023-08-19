#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetTickFrequency : uint8_t {
    Never = 0,
    Auto = 1,
    EWidgetTickFrequency_MAX = 2,
};
#pragma pack(pop)
