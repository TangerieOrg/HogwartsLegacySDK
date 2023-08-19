#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FMovieSceneEvent.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
struct FFrameNumber;
class UMovieSceneScriptingEventKey;
#pragma pack(push, 1)
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingEventChannel* StaticClass();
    void RemoveKey(UMovieSceneScriptingKey* Key);
    TArray<UMovieSceneScriptingKey*> GetKeys();
    UMovieSceneScriptingEventKey* AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
