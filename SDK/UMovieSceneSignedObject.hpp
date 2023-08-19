#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneSignedObject : public UObject {
public:
    FGuid Signature; // 0x28
    char pad_38[0x18];
    static UMovieSceneSignedObject* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
