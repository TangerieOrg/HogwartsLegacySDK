#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ClothOptions : public USceneRigObjectActionState {
public:
    char pad_70[0xa0];
    static USceneActionState_ClothOptions* StaticClass();
    FVector2D GetPreviousAnimDriveStiffness();
}; // Size: 0x110
#pragma pack(pop)
