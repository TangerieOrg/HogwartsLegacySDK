#pragma once
#include <cstdint>
#include "EFireEventsAtPosition.hpp"
#include "UMovieSceneNameableTrack.hpp"
class UMovieSceneSection;
#pragma pack(push, 1)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack {
public:
    char pad_90[0x10];
    uint8_t bFireEventsWhenForwards : 1; // 0xa0
    uint8_t bFireEventsWhenBackwards : 1; // 0xa0
    uint8_t pad_bitfield_a0_2 : 6;
    char pad_a1[0x3];
    EFireEventsAtPosition EventPosition; // 0xa4
    char pad_a5[0x3];
    TArray<UMovieSceneSection*> Sections; // 0xa8
    static UMovieSceneEventTrack* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
