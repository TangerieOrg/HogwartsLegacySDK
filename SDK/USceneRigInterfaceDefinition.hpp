#pragma once
#include <cstdint>
#include "UObject.hpp"
class USceneRigParameterDefinition;
#pragma pack(push, 1)
class USceneRigInterfaceDefinition : public UObject {
public:
    TArray<USceneRigInterfaceDefinition*> InheritedParents; // 0x28
    TArray<USceneRigParameterDefinition*> ParameterDefinitions; // 0x38
    FString ExportPath; // 0x48
    static USceneRigInterfaceDefinition* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
