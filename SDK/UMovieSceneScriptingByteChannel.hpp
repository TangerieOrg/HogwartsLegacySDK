#pragma once
#include <cstdint>
#include "EMovieSceneKeyInterpolation.hpp"
#include "ESequenceTimeUnit.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
class UMovieSceneScriptingByteKey;
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingByteChannel* StaticClass();
    void SetDefault(uint8_t InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    uint8_t GetDefault();
    UMovieSceneScriptingByteKey* AddKey(FFrameNumber& InTime, uint8_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
}; // Size: 0x60
#pragma pack(pop)
