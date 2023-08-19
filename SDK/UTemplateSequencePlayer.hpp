#pragma once
#include <cstdint>
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "UMovieSceneSequencePlayer.hpp"
class UObject;
class UTemplateSequence;
class ATemplateSequenceActor;
#pragma pack(push, 1)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer {
public:
    char pad_4e8[0x8];
    static UTemplateSequencePlayer* StaticClass();
    static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
}; // Size: 0x4f0
#pragma pack(pop)
