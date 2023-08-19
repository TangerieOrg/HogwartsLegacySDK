#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EControlRigState {
    Init = 0,
    Update = 1,
    Invalid = 2,
    EControlRigState_MAX = 3,
};
#pragma pack(pop)
