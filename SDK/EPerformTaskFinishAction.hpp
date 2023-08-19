#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerformTaskFinishAction : uint8_t {
    ReturnToActivity = 0,
    StopAndWait = 1,
    ContinueTaskWhenCancelled = 2,
    EPerformTaskFinishAction_MAX = 3,
};
#pragma pack(pop)
