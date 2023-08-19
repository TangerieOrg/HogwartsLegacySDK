#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUpdatePumpComponentMode : uint8_t {
    UPM_ALWAYS = 0,
    UPM_EDITORONLY = 1,
    UPM_GAMEONLY = 2,
    UPM_NEVER = 3,
    UPM_MAX = 4,
};
#pragma pack(pop)
