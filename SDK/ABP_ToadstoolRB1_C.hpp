#pragma once
#include <cstdint>
#include "ARigidBodyBase.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_ToadstoolRB1_C : public ARigidBodyBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* StaticMesh; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    float LifeTime; // 0x260
    char pad_264[0x4];
    static ABP_ToadstoolRB1_C* StaticClass();
    void ReceiveBeginPlay();
    void DestroyActor();
    void ExecuteUbergraph_BP_ToadstoolRB1(int32_t EntryPoint, FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration);
}; // Size: 0x268
#pragma pack(pop)
