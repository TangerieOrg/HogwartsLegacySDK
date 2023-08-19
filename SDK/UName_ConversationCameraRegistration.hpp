#pragma once
#include <cstdint>
#include "FConversationCameraRegistrationReference.hpp"
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_ConversationCameraRegistration : public UNameProvider {
public:
    FConversationCameraRegistrationReference Camera; // 0x28
    static UName_ConversationCameraRegistration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
