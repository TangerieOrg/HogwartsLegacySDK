#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ACLVisualFidelityChangeResult : uint8_t {
    Dispatched = 0,
    Completed = 1,
    Failed = 2,
    ACLVisualFidelityChangeResult_MAX = 3,
};
#pragma pack(pop)
