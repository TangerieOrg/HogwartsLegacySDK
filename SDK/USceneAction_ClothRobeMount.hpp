#pragma once
#include <cstdint>
#include "FClothMountTargets.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ClothRobeMount : public USceneRigObjectActionBase {
public:
    FClothMountTargets ClothMountTargets; // 0xa0
    bool BlendIn; // 0xb8
    bool TargetsOnly; // 0xb9
    char pad_ba[0x6];
    static USceneAction_ClothRobeMount* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
