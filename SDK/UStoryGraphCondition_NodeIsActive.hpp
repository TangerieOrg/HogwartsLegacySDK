#pragma once
#include <cstdint>
#include "FStoryGraphConditionNodeReference.hpp"
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_NodeIsActive : public UStoryGraphConditionProvider {
public:
    FStoryGraphConditionNodeReference Node; // 0x28
    static UStoryGraphCondition_NodeIsActive* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
