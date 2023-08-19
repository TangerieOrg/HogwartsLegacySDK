#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UConversationPreset_CheckBetweenTest : public UObject {
public:
    bool Enabled; // 0x28
    char pad_29[0x7];
    static UConversationPreset_CheckBetweenTest* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
