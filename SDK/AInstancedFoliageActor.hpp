#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AInstancedFoliageActor : public AActor {
public:
    char pad_248[0x50];
    static AInstancedFoliageActor* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
