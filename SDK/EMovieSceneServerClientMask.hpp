#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneServerClientMask {
    None = 0,
    Server = 1,
    Client = 2,
    All = 3,
    EMovieSceneServerClientMask_MAX = 4,
};
#pragma pack(pop)
