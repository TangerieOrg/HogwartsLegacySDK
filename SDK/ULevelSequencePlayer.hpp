#pragma once
#include <cstdint>
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "UMovieSceneSequencePlayer.hpp"
class UCameraComponent;
class ULevelSequence;
class UObject;
class ALevelSequenceActor;
#pragma pack(push, 1)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer {
public:
    char pad_4e8[0x118];
    static ULevelSequencePlayer* StaticClass();
    UCameraComponent* GetActiveCameraComponent();
    static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
}; // Size: 0x600
#pragma pack(pop)
