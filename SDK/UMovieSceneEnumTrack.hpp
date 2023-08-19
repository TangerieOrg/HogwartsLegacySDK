#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
class UEnum;
#pragma pack(push, 1)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack {
public:
    UEnum* Enum; // 0xc0
    static UMovieSceneEnumTrack* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
