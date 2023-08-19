#pragma once
#include <cstdint>
#include "EAimAtAxisType.hpp"
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_AimAt : public USceneRigObjectActionBase {
public:
    UTransformProvider* AimTarget; // 0xa0
    EAimAtAxisType AimAxis; // 0xa8
    char pad_a9[0x7];
    static USceneAction_AimAt* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
