#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EKnowledgeApplicability {
    Always = 0,
    OnlyIfUnknown = 1,
    EKnowledgeApplicability_MAX = 2,
};
#pragma pack(pop)
