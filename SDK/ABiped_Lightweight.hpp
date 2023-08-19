#pragma once
#include <cstdint>
#include "ABase_Character.hpp"
class UFacialComponent;
class UBipedStateComponent;
#pragma pack(push, 1)
class ABiped_Lightweight : public ABase_Character {
public:
    UBipedStateComponent* ObjectStateComponent; // 0x1660
    char pad_1668[0x8];
    static ABiped_Lightweight* StaticClass();
}; // Size: 0x1670
#pragma pack(pop)
