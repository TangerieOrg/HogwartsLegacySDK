#pragma once
#include <cstdint>
#include "FConversationExplicitPoseGroup.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationExplicitPoseGroups : public UDataAsset {
public:
    TArray<FConversationExplicitPoseGroup> PoseGroups; // 0x30
    static UConversationExplicitPoseGroups* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
