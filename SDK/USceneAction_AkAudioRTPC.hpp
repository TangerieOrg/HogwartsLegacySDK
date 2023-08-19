#pragma once
#include <cstdint>
#include "FActionParameter_AkAudioRTPC.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AkAudioRTPC : public USceneRigObjectActionBase {
public:
    FActionParameter_AkAudioRTPC RTPCInfo; // 0xa0
    static USceneAction_AkAudioRTPC* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
