#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UAvatarCreatorPage : public UPhoenixUserWidget {
public:
    char pad_328[0x50];
    static UAvatarCreatorPage* StaticClass();
    void SetPlayerVoicePitch(int32_t PlayerVoicePitch);
    int32_t GetPlayerVoicePitch();
}; // Size: 0x378
#pragma pack(pop)
