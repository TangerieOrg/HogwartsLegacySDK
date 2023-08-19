#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDuelTechniqueRules {
    ListEncounterRule = 0,
    IncompleteRule = 1,
    NumTimesSeenRule = 2,
    TechniqueWeightRule = 3,
    DifficultyRule = 4,
    SpellCategoryRule = 5,
    ItemRule = 6,
    EnvironmentObstacleRule = 7,
    DTCategoriesRule = 8,
    EquippedSpellsRule = 9,
    EDuelTechniqueRules_MAX = 10,
};
#pragma pack(pop)
