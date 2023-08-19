#pragma once
#include <cstdint>
#include "FActionParameter_AvaAudioMusic.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AvaAudioMusic : public USceneRigObjectActionBase {
public:
    FActionParameter_AvaAudioMusic MusicInfo; // 0xa0
    static USceneAction_AvaAudioMusic* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
