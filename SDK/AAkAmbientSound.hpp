#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAkAudioEvent;
class UAkComponent;
#pragma pack(push, 1)
class AAkAmbientSound : public AActor {
public:
    UAkAudioEvent* AkAudioEvent; // 0x248
    UAkComponent* AkComponent; // 0x250
    bool StopWhenOwnerIsDestroyed; // 0x258
    bool AutoPost; // 0x259
    char pad_25a[0x2e];
    static AAkAmbientSound* StaticClass();
    void StopAmbientSound();
    void StartAmbientSound();
}; // Size: 0x288
#pragma pack(pop)
