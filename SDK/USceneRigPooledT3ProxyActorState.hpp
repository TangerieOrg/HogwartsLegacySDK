#pragma once
#include <cstdint>
#include "USceneRigProxyActorState.hpp"
#pragma pack(push, 1)
class USceneRigPooledT3ProxyActorState : public USceneRigProxyActorState {
public:
    char pad_a0[0x8];
    static USceneRigPooledT3ProxyActorState* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
