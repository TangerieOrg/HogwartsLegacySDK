#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAttachCameraComponent;
#pragma pack(push, 1)
class AAttachCameraActor : public AActor {
public:
    UAttachCameraComponent* AttachCamera; // 0x248
    static AAttachCameraActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
