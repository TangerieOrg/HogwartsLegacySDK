#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVisibilityBasedAnimTickOption : uint8_t {
    AlwaysTickPoseAndRefreshBones = 0,
    AlwaysTickPose = 1,
    OnlyTickMontagesWhenNotRendered = 2,
    OnlyTickPoseWhenRendered = 3,
    EVisibilityBasedAnimTickOption_MAX = 4,
};
#pragma pack(pop)
