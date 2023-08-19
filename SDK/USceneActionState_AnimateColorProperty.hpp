#pragma once
#include <cstdint>
#include "USceneActionState_AnimateProperty.hpp"
#pragma pack(push, 1)
class USceneActionState_AnimateColorProperty : public USceneActionState_AnimateProperty {
public:
    char pad_88[0x10];
    static USceneActionState_AnimateColorProperty* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
