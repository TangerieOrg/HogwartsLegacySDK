#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlateDebuggingStateChangeEvent {
    MouseCaptureGained = 0,
    MouseCaptureLost = 1,
    ESlateDebuggingStateChangeEvent_MAX = 2,
};
#pragma pack(pop)
