#pragma once
#include <cstdint>
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieSceneEventSectionData.hpp"
#pragma pack(push, 1)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate {
    FMovieSceneEventSectionData EventData; // 0x20
    uint8_t bFireEventsWhenForwards : 1; // 0xa8
    uint8_t bFireEventsWhenBackwards : 1; // 0xa8
    uint8_t pad_bitfield_a8_2 : 6;
    char pad_a9[0x7];
}; // Size: 0xb0
#pragma pack(pop)
