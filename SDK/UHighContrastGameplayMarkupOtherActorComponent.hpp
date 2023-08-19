#pragma once
#include <cstdint>
#include "UHighContrastGameplayMarkupActorComponent.hpp"
#pragma pack(push, 1)
class UHighContrastGameplayMarkupOtherActorComponent : public UHighContrastGameplayMarkupActorComponent {
public:
    TArray<void*> MarkupActors; // 0x138
    static UHighContrastGameplayMarkupOtherActorComponent* StaticClass();
}; // Size: 0x148
#pragma pack(pop)
