#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UClass;
#pragma pack(push, 1)
class UAbility_Character_Interface : public UInterface {
public:
    static UAbility_Character_Interface* StaticClass();
    void StopCustomAbility();
    void PlayCustomAbility(UClass* InAbility, bool bPreventReactions);
}; // Size: 0x28
#pragma pack(pop)
