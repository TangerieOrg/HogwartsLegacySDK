#pragma once
#include <cstdint>
#include "UMovieSceneEntityInstantiatorSystem.hpp"
#pragma pack(push, 1)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem {
public:
    char pad_40[0x180];
    static UMovieSceneComponentAttachmentSystem* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)
