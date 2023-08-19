#pragma once
#include <cstdint>
#include "UStencilManagerMatchActor.hpp"
#pragma pack(push, 1)
class UStencilManagerMatchActorHasStaticMesh : public UStencilManagerMatchActor {
public:
    char pad_28[0x28];
    bool bIncludeChildActors; // 0x50
    char pad_51[0x7];
    static UStencilManagerMatchActorHasStaticMesh* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
