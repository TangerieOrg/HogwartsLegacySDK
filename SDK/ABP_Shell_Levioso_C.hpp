#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UTimelineComponent;
class UStaticMesh;
#pragma pack(push, 1)
class ABP_Shell_Levioso_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* StaticMesh; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    float Timeline_0_HitFreezePercent_Driver_7CC767384FA5A62387B223B4825FF847; // 0x260
    ETimelineDirection::Type Timeline_0__Direction_7CC767384FA5A62387B223B4825FF847; // 0x264
    char pad_265[0x3];
    UTimelineComponent* Timeline_0; // 0x268
    UMaterialInstanceDynamic* ShellMaterial; // 0x270
    UStaticMesh* MeshToFreeze; // 0x278
    FVector HitLocation; // 0x280
    char pad_28c[0x4];
    static ABP_Shell_Levioso_C* StaticClass();
    void UserConstructionScript0(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void StartShell(UStaticMesh* MeshToFreeze, FVector HitLocation);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Shell_Levioso(int32_t EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, UStaticMesh* K2Node_CustomEvent_MeshToFreeze, FVector K2Node_CustomEvent_HitLocation);
}; // Size: 0x290
#pragma pack(pop)
