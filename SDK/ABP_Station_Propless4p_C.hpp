#pragma once
#include <cstdint>
#include "ABP_Station_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class UStaticMeshComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABP_Station_Propless4p_C : public ABP_Station_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x378
    UStaticMeshComponent* ParentProp; // 0x380
    char pad_388[0xc8];
    USkeletalMeshComponent* SkelMesh; // 0x450
    USkeletalMeshComponent* SkelMesh1; // 0x458
    USkeletalMeshComponent* SkelMesh2; // 0x460
    USkeletalMeshComponent* SkelMesh3; // 0x468
    char pad_470[0x28];
    static ABP_Station_Propless4p_C* StaticClass();
    void UserConstructionScript(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Station_Propless4p(int32_t EntryPoint);
}; // Size: 0x498
#pragma pack(pop)
