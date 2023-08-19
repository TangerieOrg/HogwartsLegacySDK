#pragma once
#include <cstdint>
#include "FActionParameter_AvaAudioState.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AvaAudioState : public USceneRigActionBase {
public:
    FActionParameter_AvaAudioState StateInfo; // 0x88
    static USceneAction_AvaAudioState* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
