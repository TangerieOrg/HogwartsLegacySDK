#pragma once
#include <cstdint>
#include "UStoryNode_Custom.hpp"
#pragma pack(push, 1)
class UStoryNode_HermesMessage : public UStoryNode_Custom {
public:
    FString MessageName; // 0x98
    bool bEventCanTriggerMultipleTimes; // 0xa8
    char pad_a9[0x7];
    static UStoryNode_HermesMessage* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
