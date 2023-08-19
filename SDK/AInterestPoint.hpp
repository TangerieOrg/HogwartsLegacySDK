#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class AInterestPoint : public AActor {
public:
    USceneComponent* SceneComponent; // 0x248
    static AInterestPoint* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
