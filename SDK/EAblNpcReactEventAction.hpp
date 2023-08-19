#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblNpcReactEventAction : uint8_t {
    Ignore = 0,
    Enable = 1,
    Disable = 2,
    EAblNpcReactEventAction_MAX = 3,
};
#pragma pack(pop)
