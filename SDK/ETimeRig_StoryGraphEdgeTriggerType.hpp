#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRig_StoryGraphEdgeTriggerType : uint8_t {
    TriggeredByFinish = 0,
    TriggeredByParentNode = 1,
    TriggeredByEvent = 2,
    DoNotTrigger = 3,
    ETimeRig_MAX = 4,
};
#pragma pack(pop)
