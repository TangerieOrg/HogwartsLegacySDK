#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "MovieScene3DPathSection_Axis.hpp"
#pragma pack(push, 1)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneObjectBindingID PathBindingID; // 0x20
    FMovieSceneFloatChannel TimingCurve; // 0x38
    MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
    MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
    char pad_da[0x2];
    uint8_t bFollow : 1; // 0xdc
    uint8_t bReverse : 1; // 0xdc
    uint8_t bForceUpright : 1; // 0xdc
    uint8_t pad_bitfield_dc_3 : 5;
    char pad_dd[0x3];
}; // Size: 0xe0
#pragma pack(pop)
