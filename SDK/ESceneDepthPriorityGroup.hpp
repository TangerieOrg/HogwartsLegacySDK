#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ESceneDepthPriorityGroup : uint8_t {
    SDPG_World = 0,
    SDPG_Foreground = 1,
    SDPG_MAX = 2,
};
#pragma pack(pop)
