#pragma once
#include <cstdint>
#include "USceneActionState_AnimateProperty.hpp"
#pragma pack(push, 1)
class USceneActionState_AnimateFloatProperty : public USceneActionState_AnimateProperty {
public:
    char pad_88[0x8];
    static USceneActionState_AnimateFloatProperty* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
