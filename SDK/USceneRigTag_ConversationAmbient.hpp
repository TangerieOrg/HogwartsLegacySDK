#pragma once
#include <cstdint>
#include "UAnimationArchitectTagProvider.hpp"
#pragma pack(push, 1)
class USceneRigTag_ConversationAmbient : public UAnimationArchitectTagProvider {
public:
    char pad_28[0x18];
    static USceneRigTag_ConversationAmbient* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
