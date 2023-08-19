#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFT_TriggerType : uint8_t {
    All = 0,
    SceneRig = 1,
    StoryGraph = 2,
    EFT_MAX = 3,
};
#pragma pack(pop)
