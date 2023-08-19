#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class UUserWidget;
class UBinkMediaPlayer;
#pragma pack(push, 1)
class USceneActionState_PlayBinkMedia : public USceneRigActionState {
public:
    UUserWidget* Widget; // 0x50
    UBinkMediaPlayer* BinkMediaPlayer; // 0x58
    bool bHasValidEnter; // 0x60
    char pad_61[0x27];
    static USceneActionState_PlayBinkMedia* StaticClass();
    void OnMediaOpened(FString OpenedUrl);
    void OnMediaFailedToOpen();
}; // Size: 0x88
#pragma pack(pop)
