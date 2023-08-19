#pragma once
#include <cstdint>
#include "ABP_Station_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UObject;
class AGameStateBase;
class UStaticMesh;
#pragma pack(push, 1)
class ABP_Station_Propless1p_C : public ABP_Station_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    USkeletalMeshComponent* SkelMesh; // 0x380
    UStaticMeshComponent* ParentProp; // 0x388
    char pad_390[0x78];
    float AnimTime_Sec_; // 0x408
    char pad_40c[0x4];
    static ABP_Station_Propless1p_C* StaticClass();
    void UserConstructionScript(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Station_Propless1p(int32_t EntryPoint);
}; // Size: 0x410
#pragma pack(pop)
