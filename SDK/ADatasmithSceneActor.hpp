#pragma once
#include <cstdint>
#include "AActor.hpp"
class UDatasmithScene;
#pragma pack(push, 1)
class ADatasmithSceneActor : public AActor {
public:
    UDatasmithScene* Scene; // 0x248
    char pad_250[0x50];
    static ADatasmithSceneActor* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
