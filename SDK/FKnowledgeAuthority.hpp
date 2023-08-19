#pragma once
#include <cstdint>
#include "EKnowledgeLevel.hpp"
#pragma pack(push, 1)
struct FKnowledgeAuthority {
    FName SubjectID; // 0x0
    FName AuthorityID; // 0x8
    EKnowledgeLevel Level; // 0x10
    char pad_11[0x3];
    int32_t SocialCapital; // 0x14
}; // Size: 0x18
#pragma pack(pop)
