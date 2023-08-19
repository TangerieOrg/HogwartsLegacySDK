#pragma once
#include <cstdint>
#include "APersistentBreakable.hpp"
#include "EInteractiveState.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UInteractiveObjectComponent;
class UStaticMeshComponent;
class UStaticMesh;
#pragma pack(push, 1)
class ABP_Breakable_Fragile_C : public APersistentBreakable {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
    UInteractiveObjectComponent* InteractiveObject; // 0x2b8
    UStaticMeshComponent* StaticMesh; // 0x2c0
    FHitResult Hit_Result; // 0x2c8
    bool NeverRespawn; // 0x350
    bool CanAffectNavOverride; // 0x351
    bool HasBaseMesh; // 0x352
    bool BaseMeshCutsNav; // 0x353
    char pad_354[0x4];
    static ABP_Breakable_Fragile_C* StaticClass();
    void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, UStaticMesh* CallFunc_GetRepairBaseMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Breakable_Fragile(int32_t EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Kill_ReturnValue, EInteractiveState CallFunc_GetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
}; // Size: 0x358
#pragma pack(pop)
