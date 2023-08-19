#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStreamingBehaviorMode : uint8_t {
    Loading = 0,
    Flight = 1,
    Gameplay = 2,
    EStreamingBehaviorMode_MAX = 3,
};
#pragma pack(pop)
