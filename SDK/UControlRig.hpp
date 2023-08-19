#pragma once
#include <cstdint>
#include "ERigExecutionType.hpp"
#include "FControlRigDrawContainer.hpp"
#include "FRigHierarchyContainer.hpp"
#include "FRigInfluenceMapPerEvent.hpp"
#include "UObject.hpp"
class URigVM;
class UAnimationDataSourceRegistry;
class UClass;
class UAssetUserData;
#pragma pack(push, 1)
class UControlRig : public UObject {
public:
    char pad_28[0x1d];
    ERigExecutionType ExecutionType; // 0x45
    char pad_46[0x2];
    URigVM* VM; // 0x48
    FRigHierarchyContainer Hierarchy; // 0x50
    char pad_3b8[0xd8];
    FControlRigDrawContainer DrawContainer; // 0x490
    char pad_4a8[0x18];
    UAnimationDataSourceRegistry* DataSourceRegistry; // 0x4c0
    TArray<FName> EventQueue; // 0x4c8
    char pad_4d8[0x78];
    FRigInfluenceMapPerEvent Influences; // 0x550
    UControlRig* InteractionRig; // 0x5b0
    UClass* InteractionRigClass; // 0x5b8
    TArray<UAssetUserData*> AssetUserData; // 0x5c0
    char pad_5d0[0x80];
    static UControlRig* StaticClass();
    void SetInteractionRigClass(UClass* InInteractionRigClass);
    void SetInteractionRig(UControlRig* InInteractionRig);
    UClass* GetInteractionRigClass();
    UControlRig* GetInteractionRig();
}; // Size: 0x650
#pragma pack(pop)
