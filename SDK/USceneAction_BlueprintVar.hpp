#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class USceneActionBlueprintVarProvider;
#pragma pack(push, 1)
class USceneAction_BlueprintVar : public USceneRigObjectActionBase {
public:
    TArray<USceneActionBlueprintVarProvider*> BlueprintVariables; // 0xa0
    static USceneAction_BlueprintVar* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
