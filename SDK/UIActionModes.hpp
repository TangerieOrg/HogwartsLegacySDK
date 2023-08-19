#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum UIActionModes : uint8_t {
    UI_ACTIONMODE_ADVENTURE = 0,
    UI_ACTIONMODE_SANCTUARY = 1,
    UI_ACTIONMODE_COUNT = 2,
    UI_ACTIONMODE_MAX = 3,
};
#pragma pack(pop)
