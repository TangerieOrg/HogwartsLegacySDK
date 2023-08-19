#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FMovieSceneObjectPathChannelKeyValue {
    char pad_0[0x28];
    UObject* HardPtr; // 0x28
}; // Size: 0x30
#pragma pack(pop)
