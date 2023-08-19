#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EKnowledgeLevel : uint8_t {
    Unknown = 0,
    Level0 = 1,
    Level1 = 2,
    Level2 = 3,
    Level3 = 4,
    Level4 = 5,
    Level5 = 6,
    Completed = 7,
    Secret = 8,
    Unspecified = 9,
    EKnowledgeLevel_MAX = 10,
};
#pragma pack(pop)
