#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStoryGraphTrigger_InitializeType : uint8_t {
    InitializeWithPrevious = 0,
    InitializeByEvent = 1,
    EStoryGraphTrigger_MAX = 2,
};
#pragma pack(pop)
