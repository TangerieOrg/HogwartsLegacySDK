#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
class UMovieSceneScriptingActorReferenceKey;
#pragma pack(push, 1)
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingActorReferenceChannel* StaticClass();
    void SetDefault(FMovieSceneObjectBindingID InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    FMovieSceneObjectBindingID GetDefault();
    UMovieSceneScriptingActorReferenceKey* AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
