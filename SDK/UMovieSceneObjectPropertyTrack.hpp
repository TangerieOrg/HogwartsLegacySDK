#pragma once
#include <cstdint>
#include "UMovieScenePropertyTrack.hpp"
class UClass;
#pragma pack(push, 1)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {
public:
    char pad_c0[0x8];
    UClass* PropertyClass; // 0xc8
    static UMovieSceneObjectPropertyTrack* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
