#pragma once
#include <cstdint>
#include "USceneActionState_SetProperty.hpp"
#pragma pack(push, 1)
class USceneActionState_SetVectorProperty : public USceneActionState_SetProperty {
public:
    char pad_88[0x10];
    static USceneActionState_SetVectorProperty* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
