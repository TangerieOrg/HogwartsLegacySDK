#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInputCaptureState {
    Begin = 1,
    Continue = 2,
    End = 3,
    Ignore = 4,
    EInputCaptureState_MAX = 5,
};
#pragma pack(pop)
