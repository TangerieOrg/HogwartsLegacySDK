#pragma once
#include <cstdint>
#include "ANPC_Controller.hpp"
class UCreature_PathFollowingComponent;
class UCreatureUtilityContext;
#pragma pack(push, 1)
class ACreature_Controller : public ANPC_Controller {
public:
    char pad_460[0x8];
    float NavmeshQueryHorizontalRadius; // 0x468
    float NavmeshQueryVerticalUpRadius; // 0x46c
    float NavmeshQueryVerticalDownRadius; // 0x470
    float NavmeshQueryOffMeshMaxRadius; // 0x474
    UCreature_PathFollowingComponent* CreaturePathFollowingComp; // 0x478
    UCreatureUtilityContext* CreatureUtilityContext; // 0x480
    char pad_488[0x8];
    static ACreature_Controller* StaticClass();
}; // Size: 0x490
#pragma pack(pop)
