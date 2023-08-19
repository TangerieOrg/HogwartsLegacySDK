#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameTime.hpp"
#include "FMovieSceneEvent.hpp"
#include "UMovieSceneScriptingKey.hpp"
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey {
public:
    char pad_40[0x20];
    static UMovieSceneScriptingEventKey* StaticClass();
    void SetValue(FMovieSceneEvent& InNewValue);
    void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    FMovieSceneEvent GetValue();
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
