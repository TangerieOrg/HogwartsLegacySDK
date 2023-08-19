#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
class UClass;
#pragma pack(push, 1)
class UBTDecorator_HasActivePassiveAbility : public UBTDecorator {
public:
    FBlackboardKeySelector ActorToCheck; // 0x68
    UClass* Ability; // 0x90
    static UBTDecorator_HasActivePassiveAbility* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
