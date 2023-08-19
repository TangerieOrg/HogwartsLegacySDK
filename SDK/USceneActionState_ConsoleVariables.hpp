#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ConsoleVariables : public USceneRigActionState {
public:
    bool bSetValues; // 0x50
    bool bRestoredValues; // 0x51
    char pad_52[0x56];
    static USceneActionState_ConsoleVariables* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
