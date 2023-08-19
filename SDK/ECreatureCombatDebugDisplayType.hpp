#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureCombatDebugDisplayType : uint8_t {
    None = 0,
    WhenActive = 1,
    Always = 2,
    ECreatureCombatDebugDisplayType_MAX = 3,
};
#pragma pack(pop)
