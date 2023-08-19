#pragma once
#include <cstdint>
#include "AMaterialPreLoadKeysActor.hpp"
class AActor;
#pragma pack(push, 1)
class AMaterialPreLoadKeysActorListActor : public AMaterialPreLoadKeysActor {
public:
    TArray<AActor*> ForActors; // 0x288
    bool bAttachedChildren; // 0x298
    bool bComponentChildren; // 0x299
    char pad_29a[0x6];
    static AMaterialPreLoadKeysActorListActor* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
