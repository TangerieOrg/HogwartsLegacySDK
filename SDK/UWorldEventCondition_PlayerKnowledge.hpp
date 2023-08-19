#pragma once
#include <cstdint>
#include "EKnowledgeLevel.hpp"
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_PlayerKnowledge : public UWorldEventCondition {
public:
    FName ObjectID; // 0x38
    FName FactColumnID; // 0x40
    EKnowledgeLevel MinimumKnowledgeRequired; // 0x48
    char pad_49[0x7];
    static UWorldEventCondition_PlayerKnowledge* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
