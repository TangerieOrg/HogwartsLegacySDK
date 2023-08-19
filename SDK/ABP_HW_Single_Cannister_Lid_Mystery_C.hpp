#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_HW_Single_Cannister_Lid_Mystery_C : public AActor {
public:
    UStaticMeshComponent* StaticMesh_Lid; // 0x248
    USceneComponent* SharedRoot; // 0x250
    static ABP_HW_Single_Cannister_Lid_Mystery_C* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
