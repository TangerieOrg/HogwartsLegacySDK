#pragma once
#include <cstdint>
class UStoryGraph_Conversation;
class UNameProvider;
#pragma pack(push, 1)
struct FStaticVendorEntry {
    FString CharacterID; // 0x0
    bool EnableBeacon; // 0x10
    char pad_11[0x7];
    UStoryGraph_Conversation* VendorStoryGraph; // 0x18
    UNameProvider* ConversationPresetOverride; // 0x20
}; // Size: 0x28
#pragma pack(pop)
