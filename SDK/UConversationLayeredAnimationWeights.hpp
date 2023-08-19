#pragma once
#include <cstdint>
#include "FConversationLayeredAnimationWeightEntry.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationLayeredAnimationWeights : public UDataAsset {
public:
    TArray<FConversationLayeredAnimationWeightEntry> WeightEntries; // 0x30
    static UConversationLayeredAnimationWeights* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
