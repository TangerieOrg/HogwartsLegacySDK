#pragma once
#include <cstdint>
#include "EMovieSceneEvaluationType.hpp"
#include "EUpdateClockSource.hpp"
#include "FFrameRate.hpp"
#include "FMovieSceneBinding.hpp"
#include "FMovieSceneFrameRange.hpp"
#include "FMovieSceneMarkedFrame.hpp"
#include "FMovieScenePossessable.hpp"
#include "FMovieSceneSpawnable.hpp"
#include "FSoftObjectPath.hpp"
#include "UMovieSceneSignedObject.hpp"
class UMovieSceneTrack;
#pragma pack(push, 1)
class UMovieScene : public UMovieSceneSignedObject {
public:
    TArray<FMovieSceneSpawnable> Spawnables; // 0x50
    TArray<FMovieScenePossessable> Possessables; // 0x60
    TArray<FMovieSceneBinding> ObjectBindings; // 0x70
    char pad_80[0x50];
    TArray<UMovieSceneTrack*> MasterTracks; // 0xd0
    UMovieSceneTrack* CameraCutTrack; // 0xe0
    FMovieSceneFrameRange SelectionRange; // 0xe8
    FMovieSceneFrameRange PlaybackRange; // 0xf8
    FFrameRate TickResolution; // 0x108
    FFrameRate DisplayRate; // 0x110
    EMovieSceneEvaluationType EvaluationType; // 0x118
    EUpdateClockSource ClockSource; // 0x119
    char pad_11a[0x6];
    FSoftObjectPath CustomClockSourcePath; // 0x120
    TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x138
    static UMovieScene* StaticClass();
}; // Size: 0x148
#pragma pack(pop)
