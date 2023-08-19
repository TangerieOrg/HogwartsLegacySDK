#pragma once
#include <cstdint>
#include "EMovieSceneKeyInterpolation.hpp"
#include "ERichCurveExtrapolation.hpp"
#include "ESequenceTimeUnit.hpp"
#include "FFrameRate.hpp"
#include "FSequencerScriptingRange.hpp"
#include "UMovieSceneScriptingChannel.hpp"
class UMovieSceneScriptingKey;
struct FFrameNumber;
class UMovieSceneScriptingFloatKey;
#pragma pack(push, 1)
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel {
public:
    char pad_30[0x30];
    static UMovieSceneScriptingFloatChannel* StaticClass();
    void SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation);
    void SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation);
    void SetDefault(float InDefaultValue);
    void RemoveKey(UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    ERichCurveExtrapolation GetPreInfinityExtrapolation();
    ERichCurveExtrapolation GetPostInfinityExtrapolation();
    int32_t GetNumKeys();
    TArray<UMovieSceneScriptingKey*> GetKeys();
    float GetDefault();
    TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);
    FSequencerScriptingRange ComputeEffectiveRange();
    UMovieSceneScriptingFloatKey* AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
}; // Size: 0x60
#pragma pack(pop)
