#pragma once
#include <cstdint>
#include "FMovieSceneFloatChannel.hpp"
#include "MovieScene3DPathSection_Axis.hpp"
#include "UMovieScene3DConstraintSection.hpp"
#pragma pack(push, 1)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {
public:
    FMovieSceneFloatChannel TimingCurve; // 0x110
    MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
    MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
    char pad_1b2[0x2];
    uint8_t bFollow : 1; // 0x1b4
    uint8_t bReverse : 1; // 0x1b4
    uint8_t bForceUpright : 1; // 0x1b4
    uint8_t pad_bitfield_1b4_3 : 5;
    char pad_1b5[0x3];
    static UMovieScene3DPathSection* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
