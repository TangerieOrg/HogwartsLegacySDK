#pragma once
#include <cstdint>
#include "FFrameTime.hpp"
#include "UInterface.hpp"
struct FQualifiedFrameTime;
#pragma pack(push, 1)
class UMovieSceneCustomClockSource : public UInterface {
public:
    static UMovieSceneCustomClockSource* StaticClass();
    void OnTick(float DeltaSeconds, float InPlayRate);
    void OnStopPlaying(FQualifiedFrameTime& InStopTime);
    void OnStartPlaying(FQualifiedFrameTime& InStartTime);
    FFrameTime OnRequestCurrentTime(FQualifiedFrameTime& InCurrentTime, float InPlayRate);
}; // Size: 0x28
#pragma pack(pop)
