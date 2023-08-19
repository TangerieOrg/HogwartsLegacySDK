#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshTopologyChange : uint8_t {
    NoTopologyChange = 0,
    TopologyChange = 1,
    EMeshTopologyChange_MAX = 2,
};
#pragma pack(pop)
