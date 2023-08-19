#pragma once
#include <cstdint>
#include "EOpportunityType.hpp"
#include "UablOpportunityWindowTagTask.hpp"
#pragma pack(push, 1)
class UablOpportunityWindowTask_ModifyAOECast : public UablOpportunityWindowTagTask {
public:
    EOpportunityType OpportunityType; // 0xd0
    char pad_d1[0x3];
    float RemainingLifeTime; // 0xd4
    static UablOpportunityWindowTask_ModifyAOECast* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
