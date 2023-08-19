#pragma once
#include <cstdint>
#include "FStaticConversationRegistration.hpp"
#pragma pack(push, 1)
struct FStaticConversationRegistrationPerUser {
    FString CharacterID; // 0x0
    TArray<FStaticConversationRegistration> Registrations; // 0x10
    char pad_20[0x10];
}; // Size: 0x30
#pragma pack(pop)
