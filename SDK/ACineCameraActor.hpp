#pragma once
#include <cstdint>
#include "ACameraActor.hpp"
#include "FCameraLookatTrackingSettings.hpp"
class UCineCameraComponent;
#pragma pack(push, 1)
class ACineCameraActor : public ACameraActor {
public:
    FCameraLookatTrackingSettings LookatTrackingSettings; // 0x870
    char pad_8c0[0x10];
    static ACineCameraActor* StaticClass();
    UCineCameraComponent* GetCineCameraComponent();
}; // Size: 0x8d0
#pragma pack(pop)
