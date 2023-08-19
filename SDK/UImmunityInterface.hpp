#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UImmunityInterface : public UInterface {
public:
    static UImmunityInterface* StaticClass();
    bool ImmunityActivated(AActor* Instigator, FGameplayTagContainer Immunity);
}; // Size: 0x28
#pragma pack(pop)
