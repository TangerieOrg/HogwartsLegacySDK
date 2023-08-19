#pragma once
#include <cstdint>
#include "APawn.hpp"
#pragma pack(push, 1)
class APSOCachingCameraActor : public APawn {
public:
    char pad_2a8[0x28];
    static APSOCachingCameraActor* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
