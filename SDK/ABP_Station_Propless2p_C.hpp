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
class ABP_Station_Propless2p_C : public ABP_Station_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    char pad_380[0x50];
    USkeletalMeshComponent* SkelMesh; // 0x3d0
    char pad_3d8[0x28];
    USkeletalMeshComponent* SkelMesh1; // 0x400
    UStaticMeshComponent* ParentProp; // 0x408
    char pad_410[0x28];
    static ABP_Station_Propless2p_C* StaticClass();
    void UserConstructionScript(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, AGameStateBase* CallFunc_GetGameState_ReturnValue, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_AvaIsRunningCommandlet_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Station_Propless2p(int32_t EntryPoint);
}; // Size: 0x438
#pragma pack(pop)
