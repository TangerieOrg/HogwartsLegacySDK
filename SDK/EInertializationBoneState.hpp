#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInertializationBoneState {
    Invalid = 0,
    Valid = 1,
    Excluded = 2,
    EInertializationBoneState_MAX = 3,
};
#pragma pack(pop)
