#pragma once
#include <cstdint>
#include "UMovieScene3DConstraintTrack.hpp"
#pragma pack(push, 1)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack {
public:
    char pad_a0[0x8];
    static UMovieScene3DPathTrack* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
