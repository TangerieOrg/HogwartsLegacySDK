#pragma once
#include <cstdint>
#include "UTimeRigState.hpp"
class ULevelSequencePlayer;
#pragma pack(push, 1)
class USceneRigState : public UTimeRigState {
public:
    char pad_78[0x18];
    ULevelSequencePlayer* SequencePlayer; // 0x90
    static USceneRigState* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
