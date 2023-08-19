#include "EKnowledgeLevel.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventCondition_PlayerKnowledge.hpp"
UWorldEventCondition_PlayerKnowledge* UWorldEventCondition_PlayerKnowledge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventCondition_PlayerKnowledge");
    return (UWorldEventCondition_PlayerKnowledge*)res;
}
