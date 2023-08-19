#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureCombatDebugBehaviorType : uint8_t {
    None = 0,
    Exclude = 1,
    Forced = 2,
    ECreatureCombatDebugBehaviorType_MAX = 3,
};
#pragma pack(pop)
