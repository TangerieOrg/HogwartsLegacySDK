#pragma once
#include <cstdint>
#include "EKnowledgeAction.hpp"
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_GainKnowledgeFromCriticalHarvest : public URPGTriggerEffect_Base {
public:
    EKnowledgeAction KnowledgeAction; // 0x40
    bool bInDisplayTicker; // 0x41
    char pad_42[0x6];
    static URPGTriggerEffect_GainKnowledgeFromCriticalHarvest* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
