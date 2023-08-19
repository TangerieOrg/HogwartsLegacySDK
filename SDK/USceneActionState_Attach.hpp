#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "USceneRigObjectActionState.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneActionState_Attach : public USceneRigObjectActionState {
public:
    bool PlacementIsMoving; // 0x70
    bool PlacementIsValid; // 0x71
    char pad_72[0xe];
    FTransform InitialPlacementTransform; // 0x80
    UTransformProvider* PlacementProvider; // 0xb0
    char pad_b8[0x8];
    static USceneActionState_Attach* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
