#pragma once
#include <cstdint>
#include "AEnemy_ApparateActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UParticleSystemComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Enemy_ApperateActor_C : public AEnemy_ApparateActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
    UParticleSystemComponent* ParticleSystem; // 0x2d8
    USceneComponent* DefaultSceneRoot; // 0x2e0
    float DistToDestination; // 0x2e8
    FVector ToDestination; // 0x2ec
    static ABP_Enemy_ApperateActor_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Enemy_ApperateActor(int32_t EntryPoint);
}; // Size: 0x2f8
#pragma pack(pop)
