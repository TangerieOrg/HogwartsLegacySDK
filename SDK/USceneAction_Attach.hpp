#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UBoolProvider;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_Attach : public USceneRigObjectActionBase {
public:
    UBoolProvider* PlacementIsMoving; // 0xa0
    UTransformProvider* Placement; // 0xa8
    static USceneAction_Attach* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
