#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "USceneActionState_AnimateCurves.hpp"
#pragma pack(push, 1)
class USceneActionState_Transform : public USceneActionState_AnimateCurves {
public:
    char pad_70[0x10];
    bool IsPossiblyRegistered; // 0x80
    bool IsRegistered; // 0x81
    char pad_82[0xe];
    FTransform CurrentTransform; // 0x90
    char pad_c0[0x40];
    static USceneActionState_Transform* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
