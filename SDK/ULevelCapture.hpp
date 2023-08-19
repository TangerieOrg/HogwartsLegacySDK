#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UMovieSceneCapture.hpp"
#pragma pack(push, 1)
class ULevelCapture : public UMovieSceneCapture {
public:
    bool bAutoStartCapture; // 0x230
    char pad_231[0xb];
    FGuid PrerequisiteActorId; // 0x23c
    char pad_24c[0x4];
    static ULevelCapture* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
