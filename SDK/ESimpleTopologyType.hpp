#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESimpleTopologyType : uint8_t {
    Init = 0,
    PendingCompute = 1,
    Surface = 2,
    Interior = 3,
    EmptySpace = 4,
    Error = 5,
    ESimpleTopologyType_MAX = 6,
};
#pragma pack(pop)
