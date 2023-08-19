#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_RusticLamppostDressing_Signs_C : public AActor {
public:
    UStaticMeshComponent* SM_OVL_Sign_I; // 0x248
    UStaticMeshComponent* SM_HW_Trash_HomeworkPaper2; // 0x250
    UStaticMeshComponent* SM_HW_Trash_HomeworkPaper1; // 0x258
    UStaticMeshComponent* SM_HW_Trash_HomeworkPaper; // 0x260
    UStaticMeshComponent* SM_OVL_Sign_F; // 0x268
    UStaticMeshComponent* SM_OVL_Sign_H; // 0x270
    USceneComponent* DefaultSceneRoot; // 0x278
    static ABP_RusticLamppostDressing_Signs_C* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
