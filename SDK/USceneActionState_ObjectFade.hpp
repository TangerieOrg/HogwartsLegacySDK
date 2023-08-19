#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ObjectFade : public USceneRigObjectActionState {
public:
    bool bStartedFade; // 0x70
    char pad_71[0x7];
    static USceneActionState_ObjectFade* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
