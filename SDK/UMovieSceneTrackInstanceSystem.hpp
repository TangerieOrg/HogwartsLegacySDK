#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
class UMovieSceneTrackInstanceInstantiator;
#pragma pack(push, 1)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem {
public:
    UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
    static UMovieSceneTrackInstanceSystem* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
