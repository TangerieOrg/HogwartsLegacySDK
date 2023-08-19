#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBoneEvaluationRootMode : uint8_t {
    UseContentSetting = 0,
    IgnoreRoot = 1,
    IncludeRoot = 2,
    EBoneEvaluationRootMode_MAX = 3,
};
#pragma pack(pop)
