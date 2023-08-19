#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UObject;
class UMovieSceneScriptingKey;
class UMovieSceneScriptingObjectPathKey;
#pragma pack(push, 1)
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingObjectPathChannel* StaticClass();
    void SetDefault(UObject* InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    UObject* GetDefault();
    UMovieSceneScriptingObjectPathKey* AddKey(FFrameNumber InTime, UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
