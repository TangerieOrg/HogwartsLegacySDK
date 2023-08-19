#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELineTraceTestActorQueryMobilityType : uint8_t {
    Any = 0,
    Static = 1,
    Dynamic = 2,
    ELineTraceTestActorQueryMobilityType_MAX = 3,
};
#pragma pack(pop)
