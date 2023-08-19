#pragma once
#include <cstdint>
#include "UMovieSceneHookSection.hpp"
#pragma pack(push, 1)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection {
public:
    char pad_100[0x18];
    static UTestMovieSceneEvalHookSection* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
