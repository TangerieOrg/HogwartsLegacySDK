#pragma once
#include <cstdint>
#include "ECreatureMovementSpeed.hpp"
#include "ECreaturePathEndMode.hpp"
#include "ECreatureStoppingMode.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_SetGaitSpeed : public UBTTaskNode {
public:
    bool bSetGait; // 0x70
    ECreatureMovementSpeed Gait; // 0x71
    bool bSetPathEndMode; // 0x72
    ECreaturePathEndMode PathEndMode; // 0x73
    bool bSetStoppingMode; // 0x74
    ECreatureStoppingMode StoppingMode; // 0x75
    char pad_76[0x2];
    static UBTTask_Creature_SetGaitSpeed* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
