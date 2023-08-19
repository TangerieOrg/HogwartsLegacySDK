#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_WorldBaseHeight : public USceneRigActionState {
public:
    char pad_50[0x8];
    static USceneActionState_WorldBaseHeight* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
