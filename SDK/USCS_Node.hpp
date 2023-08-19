#pragma once
#include <cstdint>
#include "FBPVariableMetaDataEntry.hpp"
#include "FBlueprintCookedComponentInstancingData.hpp"
#include "FGuid.hpp"
#include "UObject.hpp"
class UClass;
class UActorComponent;
#pragma pack(push, 1)
class USCS_Node : public UObject {
public:
    UClass* ComponentClass; // 0x28
    UActorComponent* ComponentTemplate; // 0x30
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
    FName AttachToName; // 0x80
    FName ParentComponentOrVariableName; // 0x88
    FName ParentComponentOwnerClassName; // 0x90
    bool bIsParentComponentNative; // 0x98
    char pad_99[0x7];
    TArray<USCS_Node*> ChildNodes; // 0xa0
    TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
    FGuid VariableGuid; // 0xc0
    FName InternalVariableName; // 0xd0
    static USCS_Node* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
