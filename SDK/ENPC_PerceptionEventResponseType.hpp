#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_PerceptionEventResponseType {
    Normal = 0,
    Distraction = 1,
    ENPC_MAX = 2,
};
#pragma pack(pop)
