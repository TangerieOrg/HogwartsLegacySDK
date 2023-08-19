#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_BlueprintVar : public USceneRigObjectActionState {
public:
    bool bFirstTime; // 0x70
    char pad_71[0x7];
    static USceneActionState_BlueprintVar* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
