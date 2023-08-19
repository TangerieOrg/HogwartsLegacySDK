#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UConversationPreset_RelativeInteractionActorTest : public UObject {
public:
    bool Enabled; // 0x28
    char pad_29[0x7];
    static UConversationPreset_RelativeInteractionActorTest* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
