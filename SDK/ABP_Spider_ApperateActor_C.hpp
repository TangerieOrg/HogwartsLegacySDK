#pragma once
#include <cstdint>
#include "AEnemy_ApparateActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_Spider_ApperateActor_C : public AEnemy_ApparateActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
    USceneComponent* DefaultSceneRoot; // 0x2d8
    float DistToDestination; // 0x2e0
    FVector ToDestination; // 0x2e4
    static ABP_Spider_ApperateActor_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spider_ApperateActor(int32_t EntryPoint);
}; // Size: 0x2f0
#pragma pack(pop)
