#pragma once
#include <cstdint>
#include "AActor.hpp"
class ALevelSequenceActor;
class UMediaComponent;
#pragma pack(push, 1)
class ALevelSequenceMediaController : public AActor {
public:
    char pad_248[0x8];
    ALevelSequenceActor* Sequence; // 0x250
    UMediaComponent* MediaComponent; // 0x258
    float ServerStartTimeSeconds; // 0x260
    char pad_264[0xc];
    static ALevelSequenceMediaController* StaticClass();
    void SynchronizeToServer(float DesyncThresholdSeconds);
    void Play();
    void OnRep_ServerStartTimeSeconds();
    ALevelSequenceActor* GetSequence();
    UMediaComponent* GetMediaComponent();
}; // Size: 0x270
#pragma pack(pop)
