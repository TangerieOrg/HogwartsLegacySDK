#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPolygonEdgeHardness : uint8_t {
    NewEdgesSoft = 0,
    NewEdgesHard = 1,
    AllEdgesSoft = 2,
    AllEdgesHard = 3,
    EPolygonEdgeHardness_MAX = 4,
};
#pragma pack(pop)
