#pragma once
#include <cstdint>
#include "UStoryNodeState_Custom.hpp"
#pragma pack(push, 1)
class UStoryNodeState_HermesMessage : public UStoryNodeState_Custom {
public:
    char pad_38[0x8];
    static UStoryNodeState_HermesMessage* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
