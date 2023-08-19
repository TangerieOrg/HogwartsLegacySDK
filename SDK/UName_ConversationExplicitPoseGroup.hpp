#pragma once
#include <cstdint>
#include "FConversationExplicitPoseGroupReference.hpp"
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_ConversationExplicitPoseGroup : public UNameProvider {
public:
    FConversationExplicitPoseGroupReference Reference; // 0x28
    static UName_ConversationExplicitPoseGroup* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
