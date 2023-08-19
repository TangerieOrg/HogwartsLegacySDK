#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ARaceGhostOrb : public AActor {
public:
    char pad_248[0x30];
    static ARaceGhostOrb* StaticClass();
    void OnFinishedCourse();
}; // Size: 0x278
#pragma pack(pop)
