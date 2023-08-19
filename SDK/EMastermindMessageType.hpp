#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMastermindMessageType {
    TestResult = 0,
    StepResult = 1,
    ProgressUpdate = 2,
    EMastermindMessageType_MAX = 3,
};
#pragma pack(pop)
