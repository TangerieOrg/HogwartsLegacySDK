#pragma once
#include <cstdint>
#include "FWeatherSequenceOrigin.hpp"
#include "UObject.hpp"
class UWeatherSequence;
class USceneRigPlayer;
#pragma pack(push, 1)
class ULiveWeatherSequenceInfo : public UObject {
public:
    UWeatherSequence* Sequence; // 0x28
    USceneRigPlayer* Player; // 0x30
    FWeatherSequenceOrigin Origin; // 0x38
    FWeatherSequenceOrigin Next; // 0x58
    float GamePlaybackScale; // 0x78
    float DynamicPlaybackScale; // 0x7c
    bool bKillASAP; // 0x80
    bool bForceInstantChange; // 0x81
    bool bCalledReadyToPlay; // 0x82
    bool bPaused; // 0x83
    bool bDone; // 0x84
    char pad_85[0x13];
    static ULiveWeatherSequenceInfo* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
