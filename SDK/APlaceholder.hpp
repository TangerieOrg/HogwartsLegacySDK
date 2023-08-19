#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class APlaceholder : public AActor {
public:
    USceneComponent* SceneComponent; // 0x248
    static APlaceholder* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
