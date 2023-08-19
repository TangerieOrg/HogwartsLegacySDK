#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings {
public:
    FString DeveloperConfigName; // 0x38
    FName FavoriteTagSource; // 0x48
    static UGameplayTagsDeveloperSettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
