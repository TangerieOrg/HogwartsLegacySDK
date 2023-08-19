#pragma once
#include <cstdint>
#include "FMovieSceneEventChannel.hpp"
#include "UMovieSceneEventSectionBase.hpp"
#pragma pack(push, 1)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {
public:
    char pad_e8[0x8];
    FMovieSceneEventChannel EventChannel; // 0xf0
    static UMovieSceneEventTriggerSection* StaticClass();
}; // Size: 0x178
#pragma pack(pop)
