#pragma once
#include <cstdint>
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "UActorComponent.hpp"
class UActorSequence;
class UActorSequencePlayer;
#pragma pack(push, 1)
class UActorSequenceComponent : public UActorComponent {
public:
    FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xc8
    char pad_dc[0x4];
    UActorSequence* Sequence; // 0xe0
    UActorSequencePlayer* SequencePlayer; // 0xe8
    static UActorSequenceComponent* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
