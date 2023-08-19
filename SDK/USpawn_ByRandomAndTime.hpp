#pragma once
#include <cstdint>
#include "UActorSpawner.hpp"
class UStaticMeshPoolBaseData;
class UStaticMesh;
#pragma pack(push, 1)
class USpawn_ByRandomAndTime : public UActorSpawner {
public:
    UStaticMeshPoolBaseData* StaticMeshPoolDA; // 0x48
    UStaticMesh* RandomStaticMesh; // 0x50
    static USpawn_ByRandomAndTime* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
