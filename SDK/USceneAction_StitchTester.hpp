#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_StitchTester : public USceneRigObjectActionBase {
public:
    FAnimationRequestLayerReference Layer; // 0xa0
    float FrontBackDistance; // 0xa8
    float LeftRightDistance; // 0xac
    int32_t MoveCount; // 0xb0
    int32_t WaitCount; // 0xb4
    static USceneAction_StitchTester* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
