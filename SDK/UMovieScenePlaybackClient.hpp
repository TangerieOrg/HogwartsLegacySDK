#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMovieScenePlaybackClient : public UInterface {
public:
    static UMovieScenePlaybackClient* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
