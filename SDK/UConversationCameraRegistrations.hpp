#pragma once
#include <cstdint>
#include "FConversationCameraRegistration.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UConversationCameraRegistrations : public UDataAsset {
public:
    TArray<FConversationCameraRegistration> Registrations; // 0x30
    static UConversationCameraRegistrations* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
