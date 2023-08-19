#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEncounterDuelTechniqueOverrideType : int8_t {
    AlwaysSelectIfValid = 0,
    AlwaysSelectEvenIfInvalid = 1,
    PreferStronglyToSelect = 2,
    PreferLooselyToSelect = 3,
    PreferLooselyToAvoid = 4,
    PreferStronglyToAvoid = 5,
    NeverSelect = 6,
    EEncounterDuelTechniqueOverrideType_MAX = 7,
};
#pragma pack(pop)
