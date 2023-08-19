#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDrivenBoneModificationMode : uint8_t {
    AddToInput = 0,
    ReplaceComponent = 1,
    AddToRefPose = 2,
    EDrivenBoneModificationMode_MAX = 3,
};
#pragma pack(pop)
