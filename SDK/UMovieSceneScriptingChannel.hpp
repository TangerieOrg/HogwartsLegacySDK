#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneScriptingChannel : public UObject {
public:
    FName ChannelName; // 0x28
    static UMovieSceneScriptingChannel* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
