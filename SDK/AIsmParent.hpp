#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class AIsmParent : public AActor {
public:
    UStaticMesh* InstancedMesh; // 0x248
    bool HierarchicalISM; // 0x250
    bool DisableISM; // 0x251
    char pad_252[0x6];
    static AIsmParent* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
