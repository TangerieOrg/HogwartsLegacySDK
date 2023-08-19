#include "EKnowledgeAction.hpp"
#include "FKnowledgeInfo.hpp"
#include "UInvestigatableComponent.hpp"
#include "UInvestigatableKnowledge.hpp"
UInvestigatableKnowledge* UInvestigatableKnowledge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InvestigatableKnowledge");
    return (UInvestigatableKnowledge*)res;
}
