#pragma once
#include <cstdint>
#include "ERichCurveExtrapolation.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FMovieSceneChannel.hpp"
#include "FMovieSceneFloatValue.hpp"
#include "FMovieSceneKeyHandleMap.hpp"
#pragma pack(push, 1)
struct FMovieSceneFloatChannel : public FMovieSceneChannel {
    ERichCurveExtrapolation PreInfinityExtrap; // 0x8
    ERichCurveExtrapolation PostInfinityExtrap; // 0x9
    char pad_a[0x6];
    TArray<FFrameNumber> Times; // 0x10
    TArray<FMovieSceneFloatValue> Values; // 0x20
    float DefaultValue; // 0x30
    bool bHasDefaultValue; // 0x34
    char pad_35[0x3];
    FMovieSceneKeyHandleMap KeyHandles; // 0x38
    FFrameRate TickResolution; // 0x98
}; // Size: 0xa0
#pragma pack(pop)
