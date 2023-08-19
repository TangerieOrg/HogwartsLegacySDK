#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_SkipControl : public USceneRigActionState {
public:
    char pad_50[0x90];
    static USceneActionState_SkipControl* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
