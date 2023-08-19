#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class UUserWidget;
class UMediaPlayer;
#pragma pack(push, 1)
class USceneActionState_PlayFMV : public USceneRigActionState {
public:
    UUserWidget* Widget; // 0x50
    UMediaPlayer* MediaPlayer; // 0x58
    static USceneActionState_PlayFMV* StaticClass();
    void OnMediaOpened(FString OpenedUrl);
}; // Size: 0x60
#pragma pack(pop)
