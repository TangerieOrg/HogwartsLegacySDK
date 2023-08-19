#pragma once
#include <cstdint>
#include "FMovieSceneBoolChannel.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneBoolSection : public UMovieSceneSection {
public:
    bool DefaultValue; // 0xe8
    char pad_e9[0x7];
    FMovieSceneBoolChannel BoolCurve; // 0xf0
    static UMovieSceneBoolSection* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
