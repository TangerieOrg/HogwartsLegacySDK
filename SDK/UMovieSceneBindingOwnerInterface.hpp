#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMovieSceneBindingOwnerInterface : public UInterface {
public:
    static UMovieSceneBindingOwnerInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
