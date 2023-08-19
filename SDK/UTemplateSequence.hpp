#pragma once
#include <cstdint>
#include "UMovieSceneSequence.hpp"
class UMovieScene;
#pragma pack(push, 1)
class UTemplateSequence : public UMovieSceneSequence {
public:
    UMovieScene* MovieScene; // 0x60
    char pad_68[0xa0];
    static UTemplateSequence* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
