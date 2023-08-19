#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFocusCause {
    Mouse = 0,
    Navigation = 1,
    SetDirectly = 2,
    Cleared = 3,
    OtherWidgetLostFocus = 4,
    WindowActivate = 5,
    EFocusCause_MAX = 6,
};
#pragma pack(pop)
