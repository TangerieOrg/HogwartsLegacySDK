#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_IsPlayingAbility : public UBTDecorator {
public:
    FBlackboardKeySelector ActorToCheck; // 0x68
    static UBTDecorator_IsPlayingAbility* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
