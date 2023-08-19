#pragma once
#include <cstdint>
#include "FActionParameter_AkAudioState.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AkAudioState : public USceneRigActionBase {
public:
    FActionParameter_AkAudioState StateInfo; // 0x88
    static USceneAction_AkAudioState* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
