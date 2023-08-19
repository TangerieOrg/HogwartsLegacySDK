#pragma once
#include <cstdint>
#include "USceneActionState_SetProperty.hpp"
#pragma pack(push, 1)
class USceneActionState_SetFloatProperty : public USceneActionState_SetProperty {
public:
    char pad_88[0x8];
    static USceneActionState_SetFloatProperty* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
