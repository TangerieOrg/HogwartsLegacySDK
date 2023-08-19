#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_FacialEmotions : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    static USceneActionState_FacialEmotions* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
