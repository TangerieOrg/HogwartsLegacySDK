#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UMediaSource;
class UDataTable;
class UClass;
class UFloatProvider;
class UBinkMediaPlayer;
#pragma pack(push, 1)
class USceneAction_PlayBinkMedia : public USceneRigActionBase {
public:
    UMediaSource* MediaSource; // 0x88
    UDataTable* SubtitlesDataTable; // 0x90
    bool bOverridesSceneRig; // 0x98
    char pad_99[0x3];
    float EffectVolumeFactor; // 0x9c
    float VoiceVolumeFactor; // 0xa0
    float FudgeFactor; // 0xa4
    bool bDelayedOpen; // 0xa8
    char pad_a9[0x7];
    UClass* WidgetClass; // 0xb0
    UFloatProvider* Opacity; // 0xb8
    UFloatProvider* ForegroundOpacity; // 0xc0
    UBinkMediaPlayer* BinkMediaPlayer; // 0xc8
    char pad_d0[0x10];
    static USceneAction_PlayBinkMedia* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
