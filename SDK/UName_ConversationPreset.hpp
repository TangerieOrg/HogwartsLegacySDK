#pragma once
#include <cstdint>
#include "FConversationPresetReference.hpp"
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_ConversationPreset : public UNameProvider {
public:
    FConversationPresetReference Reference; // 0x28
    static UName_ConversationPreset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
