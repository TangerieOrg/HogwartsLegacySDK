#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESocialAgentState {
    Inactive = 0,
    Blocking = 1,
    Avoiding = 2,
    ESocialAgentState_MAX = 3,
};
#pragma pack(pop)
