#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UMediaSource;
class UMediaPlayer;
#pragma pack(push, 1)
class USceneAction_PlayFMV : public USceneRigActionBase {
public:
    UMediaSource* MediaSource; // 0x88
    bool bOverridesSceneRig; // 0x90
    char pad_91[0x3];
    float FudgeFactor; // 0x94
    UMediaPlayer* MediaPlayer; // 0x98
    static USceneAction_PlayFMV* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
