#pragma once
#include <cstdint>
#include "UMovieSceneSequence.hpp"
class UMovieScene;
#pragma pack(push, 1)
class UTestMovieSceneSequence : public UMovieSceneSequence {
public:
    UMovieScene* MovieScene; // 0x60
    static UTestMovieSceneSequence* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
