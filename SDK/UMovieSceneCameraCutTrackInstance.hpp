#pragma once
#include <cstdint>
#include "UMovieSceneTrackInstance.hpp"
#pragma pack(push, 1)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance {
public:
    char pad_50[0x68];
    static UMovieSceneCameraCutTrackInstance* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
