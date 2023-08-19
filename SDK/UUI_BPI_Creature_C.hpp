#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UCreatureState;
#pragma pack(push, 1)
class UUI_BPI_Creature_C : public UInterface {
public:
    static UUI_BPI_Creature_C* StaticClass();
    void I_SetCreatureState(UCreatureState* CreatureState);
}; // Size: 0x28
#pragma pack(pop)
