#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ConsoleCommand : public USceneRigActionState {
public:
    bool bSetValues; // 0x50
    bool bRestoredValues; // 0x51
    char pad_52[0x6];
    static USceneActionState_ConsoleCommand* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
