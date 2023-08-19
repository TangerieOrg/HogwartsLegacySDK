#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCurriculumKnowledgeRequirement {
    FString KnowledgeCardName; // 0x0
    int32_t RequiredLevel; // 0x10
    int32_t CurrentLevel; // 0x14
}; // Size: 0x18
#pragma pack(pop)
