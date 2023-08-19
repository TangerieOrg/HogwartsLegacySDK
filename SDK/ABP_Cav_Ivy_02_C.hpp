#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Cav_Ivy_02_C : public AActor {
public:
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Single_C1; // 0x248
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Single_B; // 0x250
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Hanging_C; // 0x258
    UStaticMeshComponent* SM_Ivy_Kit_O2; // 0x260
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Small_A; // 0x268
    UStaticMeshComponent* SM_Ivy_Kit_P; // 0x270
    UStaticMeshComponent* SM_Ivy_Kit_N1; // 0x278
    UStaticMeshComponent* SM_Ivy_Kit_K1; // 0x280
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Hanging_A; // 0x288
    UStaticMeshComponent* SM_Ivy_Kit_K; // 0x290
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Single_E; // 0x298
    UStaticMeshComponent* SM_BCProps_Ivy_Wall_Single_C; // 0x2a0
    UStaticMeshComponent* SM_Ivy_Kit_N; // 0x2a8
    UStaticMeshComponent* SM_Ivy_Kit_O1; // 0x2b0
    UStaticMeshComponent* SM_Ivy_Kit_O; // 0x2b8
    USceneComponent* DefaultSceneRoot; // 0x2c0
    static ABP_Cav_Ivy_02_C* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
