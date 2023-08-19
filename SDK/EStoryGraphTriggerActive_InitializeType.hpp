#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStoryGraphTriggerActive_InitializeType : uint8_t {
    InitializeWhenTriggered = 0,
    InitializeWithPrevious = 1,
    EStoryGraphTriggerActive_MAX = 2,
};
#pragma pack(pop)
