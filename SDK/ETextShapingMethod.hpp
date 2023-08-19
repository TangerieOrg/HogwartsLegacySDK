#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETextShapingMethod : uint8_t {
    Auto = 0,
    KerningOnly = 1,
    FullShaping = 2,
    ETextShapingMethod_MAX = 3,
};
#pragma pack(pop)
