#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroupTopologyDeformationStrategy : uint8_t {
    Linear = 0,
    Laplacian = 1,
    EGroupTopologyDeformationStrategy_MAX = 2,
};
#pragma pack(pop)
