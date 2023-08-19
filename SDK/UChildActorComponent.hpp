#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UClass;
class AActor;
#pragma pack(push, 1)
class UChildActorComponent : public USceneComponent {
public:
    AActor* ChildActor; // 0x220
    AActor* ChildActorTemplate; // 0x228
    char pad_230[0x20];
    static UChildActorComponent* StaticClass();
    void SetChildActorClass(UClass* InClass);
}; // Size: 0x250
#pragma pack(pop)
