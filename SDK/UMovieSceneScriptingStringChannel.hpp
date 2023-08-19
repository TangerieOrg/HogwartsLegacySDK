#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
struct FFrameNumber;
class UMovieSceneScriptingStringKey;
#pragma pack(push, 1)
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingStringChannel* StaticClass();
    void SetDefault(FString InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    FString GetDefault();
    UMovieSceneScriptingStringKey* AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
