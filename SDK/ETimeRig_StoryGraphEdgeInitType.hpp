#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRig_StoryGraphEdgeInitType : uint8_t {
    InitializeWhenTriggered = 0,
    InitializeWithPrevious = 1,
    InitializeByEvent = 2,
    DoNotInitialize = 3,
    ETimeRig_MAX = 4,
};
#pragma pack(pop)
