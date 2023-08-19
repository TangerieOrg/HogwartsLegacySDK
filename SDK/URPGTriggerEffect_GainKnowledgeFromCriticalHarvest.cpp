#include "EKnowledgeAction.hpp"
#include "URPGTriggerEffect_Base.hpp"
#include "URPGTriggerEffect_GainKnowledgeFromCriticalHarvest.hpp"
URPGTriggerEffect_GainKnowledgeFromCriticalHarvest* URPGTriggerEffect_GainKnowledgeFromCriticalHarvest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_GainKnowledgeFromCriticalHarvest");
    return (URPGTriggerEffect_GainKnowledgeFromCriticalHarvest*)res;
}
