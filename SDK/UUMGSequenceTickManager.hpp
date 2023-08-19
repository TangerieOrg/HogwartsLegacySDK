#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMovieSceneEntitySystemLinker;
#pragma pack(push, 1)
class UUMGSequenceTickManager : public UObject {
public:
    char pad_28[0x50];
    UMovieSceneEntitySystemLinker* Linker; // 0x78
    char pad_80[0xa0];
    static UUMGSequenceTickManager* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
