#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EForceRenderSettingsScope : uint8_t {
    OnPlay = 0,
    OnPlayCooked = 1,
    OnPlayInEditor = 2,
    OnEditorStartup = 3,
    OnEndPlay = 4,
    Always = 5,
    EForceRenderSettingsScope_MAX = 6,
};
#pragma pack(pop)
