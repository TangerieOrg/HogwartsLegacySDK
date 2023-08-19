#pragma once
#include <cstdint>
#include "ESequenceTimeUnit.hpp"
#include "FFrameTime.hpp"
#include "UMovieSceneScriptingKey.hpp"
struct FFrameNumber;
#pragma pack(push, 1)
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey {
public:
    char pad_40[0x20];
    static UMovieSceneScriptingIntegerKey* StaticClass();
    void SetValue(int32_t InNewValue);
    void SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit);
    int32_t GetValue();
    FFrameTime GetTime(ESequenceTimeUnit TimeUnit);
}; // Size: 0x60
#pragma pack(pop)
