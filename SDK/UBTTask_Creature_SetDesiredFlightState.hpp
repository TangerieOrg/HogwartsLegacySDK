#pragma once
#include <cstdint>
#include "ECreatureFlightState.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_SetDesiredFlightState : public UBTTaskNode {
public:
    ECreatureFlightState FlightState; // 0x70
    char pad_71[0x7];
    static UBTTask_Creature_SetDesiredFlightState* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
