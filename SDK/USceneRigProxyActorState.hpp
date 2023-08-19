#pragma once
#include <cstdint>
#include "UTimeRigElementState.hpp"
#pragma pack(push, 1)
class USceneRigProxyActorState : public UTimeRigElementState {
public:
    char pad_48[0x28];
    bool FloorContactPreviouslyEnabled; // 0x70
    char pad_71[0x2f];
    static USceneRigProxyActorState* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
