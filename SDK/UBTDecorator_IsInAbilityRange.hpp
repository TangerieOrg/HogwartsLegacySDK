#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
class UClass;
#pragma pack(push, 1)
class UBTDecorator_IsInAbilityRange : public UBTDecorator {
public:
    FBlackboardKeySelector PointA; // 0x68
    FBlackboardKeySelector PointB; // 0x90
    UClass* Ability; // 0xb8
    bool XYDistance; // 0xc0
    char pad_c1[0x7];
    static UBTDecorator_IsInAbilityRange* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
