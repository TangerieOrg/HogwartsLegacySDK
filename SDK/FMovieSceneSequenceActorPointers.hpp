#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FMovieSceneSequenceActorPointers {
    AActor* SequenceActor; // 0x0
    char pad_8[0x10];
}; // Size: 0x18
#pragma pack(pop)
