#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVirtualKeyboardTrigger : uint8_t {
    OnFocusByPointer = 0,
    OnAllFocusEvents = 1,
    EVirtualKeyboardTrigger_MAX = 2,
};
#pragma pack(pop)
