#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneObjectBindingSpace : uint8_t {
    Local = 0,
    Root = 1,
    Unused = 2,
    EMovieSceneObjectBindingSpace_MAX = 3,
};
#pragma pack(pop)
