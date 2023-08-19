#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ECameraStackLookAtStrength.hpp"
#pragma pack(push, 1)
class ACameraStackLookAtTargetActor : public AActor {
public:
    ECameraStackLookAtStrength LookAtStrength; // 0x248
    char pad_249[0x2f];
    float TimeoutAfterTriggerEntered; // 0x278
    bool bTriggerOnReEntry; // 0x27c
    char pad_27d[0x11b];
    static ACameraStackLookAtTargetActor* StaticClass();
    void StopPlayerInitiation(int32_t PlayerIndex);
    void StartPlayerInitiation(int32_t PlayerIndex);
    void OnTriggerEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    void OnTriggerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    bool IsPlayerInitiationActive(int32_t PlayerIndex);
    bool IsActiveLookAtTargetForPlayer(int32_t PlayerIndex);
    void DeactivateLookAt(int32_t PlayerIndex);
    void ActivateLookAt(int32_t PlayerIndex, float Duration);
}; // Size: 0x398
#pragma pack(pop)
