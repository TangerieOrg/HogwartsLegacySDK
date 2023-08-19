#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlRigModifyBoneMode : uint8_t {
    OverrideLocal = 0,
    OverrideGlobal = 1,
    AdditiveLocal = 2,
    AdditiveGlobal = 3,
    Max = 4,
};
#pragma pack(pop)
