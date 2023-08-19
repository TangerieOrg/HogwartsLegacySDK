#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneRigObjectActionState : public USceneRigActionState {
public:
    char pad_50[0x20];
    static USceneRigObjectActionState* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
