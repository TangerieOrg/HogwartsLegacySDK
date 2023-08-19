#pragma once
#include <cstdint>
#include "FVoiceSettings.hpp"
#include "UActorComponent.hpp"
class APlayerState;
class UAudioComponent;
#pragma pack(push, 1)
class UVOIPTalker : public UActorComponent {
public:
    FVoiceSettings Settings; // 0xc8
    char pad_e0[0x20];
    static UVOIPTalker* StaticClass();
    void RegisterWithPlayerState(APlayerState* OwningState);
    float GetVoiceLevel();
    static UVOIPTalker* CreateTalkerForPlayer(APlayerState* OwningState);
    void BPOnTalkingEnd();
    void BPOnTalkingBegin(UAudioComponent* AudioComponent);
}; // Size: 0x100
#pragma pack(pop)
