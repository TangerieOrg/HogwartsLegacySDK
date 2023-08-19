#pragma once
#include <cstdint>
#include "FConversationEmotion.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationEmotions : public UDataAsset {
public:
    TArray<FConversationEmotion> Emotions; // 0x30
    static UConversationEmotions* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
