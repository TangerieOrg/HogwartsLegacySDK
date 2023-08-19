#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class USceneAction_Blueprint;
#pragma pack(push, 1)
class USceneActionState_Blueprint : public USceneRigObjectActionState {
public:
    USceneAction_Blueprint* BlueprintInstance; // 0x70
    static USceneActionState_Blueprint* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
