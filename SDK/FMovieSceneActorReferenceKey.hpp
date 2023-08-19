#pragma once
#include <cstdint>
#include "FMovieSceneObjectBindingID.hpp"
#pragma pack(push, 1)
struct FMovieSceneActorReferenceKey {
    FMovieSceneObjectBindingID Object; // 0x0
    FName ComponentName; // 0x18
    FName SocketName; // 0x20
}; // Size: 0x28
#pragma pack(pop)
