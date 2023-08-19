#pragma once
#include <cstdint>
#include "FConversationExplicitCameraShotReference.hpp"
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_ConversationExplicitCameraShot : public UNameProvider {
public:
    FConversationExplicitCameraShotReference Reference; // 0x28
    static UName_ConversationExplicitCameraShot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
