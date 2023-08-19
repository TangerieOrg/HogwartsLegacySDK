#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
class UMovieSceneScriptingIntegerKey;
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingIntegerChannel* StaticClass();
    void SetDefault(int32_t InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    int32_t GetDefault();
    UMovieSceneScriptingIntegerKey* AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
