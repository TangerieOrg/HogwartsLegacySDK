#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCameraShakeSourceComponent;
#pragma pack(push, 1)
class ACameraShakeSourceActor : public AActor {
public:
    UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x248
    static ACameraShakeSourceActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
