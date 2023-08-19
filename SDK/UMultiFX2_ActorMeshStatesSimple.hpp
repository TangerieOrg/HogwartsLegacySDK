#pragma once
#include <cstdint>
#include "UMultiFX2_ActorMeshStates.hpp"
#pragma pack(push, 1)
class UMultiFX2_ActorMeshStatesSimple : public UMultiFX2_ActorMeshStates {
public:
    bool bIncludeChildren; // 0x88
    char pad_89[0x7];
    static UMultiFX2_ActorMeshStatesSimple* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
