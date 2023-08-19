#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMontageSubStepResult {
    Moved = 0,
    NotMoved = 1,
    InvalidSection = 2,
    InvalidMontage = 3,
    EMontageSubStepResult_MAX = 4,
};
#pragma pack(pop)
