#pragma once
#include <cstdint>
#include "EKnowledgeAction.hpp"
#include "FKnowledgeInfo.hpp"
#include "UInvestigatableComponent.hpp"
#pragma pack(push, 1)
class UInvestigatableKnowledge : public UInvestigatableComponent {
public:
    FKnowledgeInfo DbKnowledgeInfo; // 0xe0
    TArray<FName> SecretFactLockNames; // 0x110
    EKnowledgeAction KnowledgeActionOverride; // 0x120
    char pad_121[0x7];
    static UInvestigatableKnowledge* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
