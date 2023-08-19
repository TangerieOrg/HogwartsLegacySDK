#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneRigObjectActionBase : public USceneRigActionBase {
public:
    char pad_88[0x8];
    bool bHasProxyParent; // 0x90
    char pad_91[0x7];
    UActorProvider* ActorProvider; // 0x98
    static USceneRigObjectActionBase* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
