#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
class USceneRigProxyActor;
#pragma pack(push, 1)
class UActor_SceneRigProxyActor : public UActorProvider {
public:
    USceneRigProxyActor* ProxyActor; // 0x38
    static UActor_SceneRigProxyActor* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
