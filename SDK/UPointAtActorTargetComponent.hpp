#pragma once
#include <cstdint>
#include "UPointAtActorBaseComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UPointAtActorTargetComponent : public UPointAtActorBaseComponent {
public:
    char pad_250[0x10];
    static UPointAtActorTargetComponent* StaticClass();
    void PointAtActorSetTarget(AActor* TargetActor);
    void PointAtActorClearTarget(AActor* TargetActor);
}; // Size: 0x260
#pragma pack(pop)
