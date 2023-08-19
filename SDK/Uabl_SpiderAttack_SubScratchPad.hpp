#pragma once
#include <cstdint>
#include "UablExecuteTaskSubScratchPad.hpp"
class UEnemy_SpawnSpiders;
#pragma pack(push, 1)
class Uabl_SpiderAttack_SubScratchPad : public UablExecuteTaskSubScratchPad {
public:
    UEnemy_SpawnSpiders* SpawnSpidersPtr; // 0x28
    static Uabl_SpiderAttack_SubScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
