#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameRate.hpp"
#include "FSequencerScriptingRange.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
struct FFrameNumber;
class UMovieSceneScriptingBoolKey;
#pragma pack(push, 1)
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingBoolChannel* StaticClass();
    void SetDefault(bool InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    int32_t GetNumKeys();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    bool GetDefault();
    TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);
    FSequencerScriptingRange ComputeEffectiveRange();
    UMovieSceneScriptingBoolKey* AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
