#pragma once
#include <cstdint>
#include "FActionParameter_AkAudioEvent.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AkAudioEvent : public USceneRigObjectActionBase {
public:
    FActionParameter_AkAudioEvent Event; // 0xa0
    FActionParameter_AkAudioEvent StopEvent; // 0xc8
    bool DisableAudioOcclusion; // 0xf0
    char pad_f1[0x3];
    FName AttachPointName; // 0xf4
    char pad_fc[0x4];
    static USceneAction_AkAudioEvent* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
