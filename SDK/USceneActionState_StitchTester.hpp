#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "USceneRigObjectActionState.hpp"
class AActor;
class USceneActionState_Transform;
#pragma pack(push, 1)
class USceneActionState_StitchTester : public USceneRigObjectActionState {
public:
    char pad_70[0x10];
    FTransform CurrentTransform; // 0x80
    char pad_b0[0x40];
    AActor* Actor; // 0xf0
    USceneActionState_Transform* TransformActionState; // 0xf8
    static USceneActionState_StitchTester* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
