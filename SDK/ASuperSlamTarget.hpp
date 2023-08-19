#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class ASuperSlamTarget : public AActor {
public:
    UBoxComponent* SceneComponent; // 0x248
    static ASuperSlamTarget* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
