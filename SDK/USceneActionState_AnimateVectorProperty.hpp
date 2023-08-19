#pragma once
#include <cstdint>
#include "USceneActionState_AnimateProperty.hpp"
#pragma pack(push, 1)
class USceneActionState_AnimateVectorProperty : public USceneActionState_AnimateProperty {
public:
    char pad_88[0x10];
    static USceneActionState_AnimateVectorProperty* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
