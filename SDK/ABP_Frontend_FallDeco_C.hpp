#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_FallDeco_C : public AActor {
public:
    UStaticMeshComponent* SM_HM_Fall_Garland1; // 0x248
    UStaticMeshComponent* SM_HM_Fall_Garland; // 0x250
    USceneComponent* SceneRoot; // 0x258
    static ABP_Frontend_FallDeco_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
