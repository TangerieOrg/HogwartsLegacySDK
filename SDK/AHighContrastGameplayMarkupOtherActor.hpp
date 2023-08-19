#pragma once
#include <cstdint>
#include "AActor.hpp"
class UHighContrastGameplayMarkupOtherActorComponent;
#pragma pack(push, 1)
class AHighContrastGameplayMarkupOtherActor : public AActor {
public:
    UHighContrastGameplayMarkupOtherActorComponent* Component; // 0x248
    static AHighContrastGameplayMarkupOtherActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
