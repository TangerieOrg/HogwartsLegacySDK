#pragma once
#include <cstdint>
#include "USceneActionState_AnimateCurves.hpp"
#pragma pack(push, 1)
class USceneActionState_AnimateProperty : public USceneActionState_AnimateCurves {
public:
    char pad_70[0x18];
    static USceneActionState_AnimateProperty* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
