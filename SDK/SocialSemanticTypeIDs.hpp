#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SocialSemanticTypeIDs : uint8_t {
    SOCIAL_SEMANTIC_TYPE_DEPRECATED = 0,
    SOCIAL_SEMANTIC_TYPE_EMOTION = 1,
    SOCIAL_SEMANTIC_TYPE_FACTION = 2,
    SOCIAL_SEMANTIC_TYPE_IDENTITY = 3,
    SOCIAL_SEMANTIC_TYPE_INTEREST = 4,
    SOCIAL_SEMANTIC_TYPE_PERSONALITY = 5,
    SOCIAL_SEMANTIC_TYPE_TRAIT = 6,
    SOCIAL_SEMANTIC_TYPE_COUNT = 7,
    SOCIAL_SEMANTIC_TYPE_MAX = 8,
};
#pragma pack(pop)
