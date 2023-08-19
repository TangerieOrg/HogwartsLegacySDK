#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETimeRig_StoryGraphEdgeActivationType {
    ActivatedByFinish = 0,
    ActivatedByEvent = 1,
    DoNotActivate = 2,
    ETimeRig_MAX = 3,
};
#pragma pack(pop)
