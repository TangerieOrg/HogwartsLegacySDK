#pragma once
#include <cstdint>
#include "USceneRigProxyActor.hpp"
#pragma pack(push, 1)
class USceneRigProxyMocapStage : public USceneRigProxyActor {
public:
    bool Visible; // 0x80
    char pad_81[0x7];
    static USceneRigProxyMocapStage* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
