#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESlateDebuggingFocusEvent {
    FocusChanging = 0,
    FocusLost = 1,
    FocusReceived = 2,
    MAX = 3,
};
#pragma pack(pop)
