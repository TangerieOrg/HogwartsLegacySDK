#pragma once
#include <cstdint>
#include "APersistentBreakable.hpp"
#include "EInteractiveState.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class UInteractiveObjectComponent;
class UStaticMesh;
#pragma pack(push, 1)
class ABP_Breakable_Persistent_C : public APersistentBreakable {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UStaticMeshComponent* StaticMesh; // 0x2b8
    UInteractiveObjectComponent* InteractiveObject; // 0x2c0
    bool NeverRespawn; // 0x2c8
    char pad_2c9[0x3];
    FHitResult Hit_Result; // 0x2cc
    bool CanAffectNavOverride; // 0x354
    bool BaseMeshCutsNav; // 0x355
    bool HasBaseMesh; // 0x356
    char pad_357[0x1];
    static ABP_Breakable_Persistent_C* StaticClass();
    void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, UStaticMesh* CallFunc_GetRepairBaseMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Breakable_Persistent(int32_t EntryPoint, EInteractiveState CallFunc_GetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Kill_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
}; // Size: 0x358
#pragma pack(pop)
