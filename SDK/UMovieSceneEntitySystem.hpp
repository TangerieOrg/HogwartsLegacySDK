#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMovieSceneEntitySystemLinker;
#pragma pack(push, 1)
class UMovieSceneEntitySystem : public UObject {
public:
    UMovieSceneEntitySystemLinker* Linker; // 0x28
    char pad_30[0x10];
    static UMovieSceneEntitySystem* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
