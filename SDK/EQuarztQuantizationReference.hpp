#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EQuarztQuantizationReference : uint8_t {
    BarRelative = 0,
    TransportRelative = 1,
    CurrentTimeRelative = 2,
    Count = 3,
    EQuarztQuantizationReference_MAX = 4,
};
#pragma pack(pop)
