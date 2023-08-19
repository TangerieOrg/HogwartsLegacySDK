#pragma once
#include <cstdint>
#include "FAmbientProxyActorReference.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_AmbientProxyActor : public UActorProvider {
public:
    char pad_38[0x8];
    FAmbientProxyActorReference AmbientProxy; // 0x40
    static UActor_AmbientProxyActor* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
