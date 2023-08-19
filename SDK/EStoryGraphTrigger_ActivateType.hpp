#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStoryGraphTrigger_ActivateType : uint8_t {
    ActivatedByFinish = 0,
    ActivatedByEvent = 1,
    EStoryGraphTrigger_MAX = 2,
};
#pragma pack(pop)
