#pragma once
#include <cstdint>
#include "FCollisionResponseTemplate.hpp"
#include "FCustomChannelSetup.hpp"
#include "FCustomProfile.hpp"
#include "FRedirector.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UCollisionProfile : public UDeveloperSettings {
public:
    TArray<FCollisionResponseTemplate> Profiles; // 0x38
    TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
    TArray<FCustomProfile> EditProfiles; // 0x58
    TArray<FRedirector> ProfileRedirects; // 0x68
    TArray<FRedirector> CollisionChannelRedirects; // 0x78
    char pad_88[0xe8];
    static UCollisionProfile* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
