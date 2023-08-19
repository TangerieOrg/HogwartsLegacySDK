#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVoiceOverCompanionSelection : uint8_t {
    ForcedOrAnySystemic = 0,
    AnyCompanion = 1,
    PrimaryCompanion = 2,
    ForcedCompanion = 3,
    SystemicCompanion = 4,
    EVoiceOverCompanionSelection_MAX = 5,
};
#pragma pack(pop)
