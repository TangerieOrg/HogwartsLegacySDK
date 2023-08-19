#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UHoudiniInstancedActorComponent : public USceneComponent {
public:
    TArray<AActor*> Instances; // 0x220
    static UHoudiniInstancedActorComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
