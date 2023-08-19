#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStrandsTexturesTraceType : uint8_t {
    TraceInside = 0,
    TraceOuside = 1,
    TraceBidirectional = 2,
    EStrandsTexturesTraceType_MAX = 3,
};
#pragma pack(pop)
