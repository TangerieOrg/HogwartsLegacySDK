#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_Visibility : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    bool PreviouslyHidden; // 0x78
    char pad_79[0x7];
    static USceneActionState_Visibility* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
