#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAvaAudio : public UObject {
public:
    char pad_28[0x688];
    static UAvaAudio* StaticClass();
    static void SetPlayerVoicePitch(int32_t PlayerVoicePitch, bool WriteToSave);
    void OnSaveGameLoaded();
    void OnNewGame();
    void OnCurtainRaised();
    void OnCurtainLowered();
    static int32_t GetPlayerVoicePitch();
}; // Size: 0x6b0
#pragma pack(pop)
