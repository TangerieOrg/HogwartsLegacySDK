#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVirtualKeyboardDismissAction : uint8_t {
    TextChangeOnDismiss = 0,
    TextCommitOnAccept = 1,
    TextCommitOnDismiss = 2,
    EVirtualKeyboardDismissAction_MAX = 3,
};
#pragma pack(pop)
