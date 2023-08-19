#pragma once
#include <cstdint>
#include "USceneActionState_AnimateCurves.hpp"
#pragma pack(push, 1)
class USceneActionState_ModifyMaterials : public USceneActionState_AnimateCurves {
public:
    char pad_70[0x140];
    static USceneActionState_ModifyMaterials* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
