#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
class USceneAction_ModifyMaterialParameterCollection : public USceneRigActionBase {
public:
    UMaterialParameterCollection* ParameterCollection; // 0x88
    bool bKeyTimesArePercentages; // 0x90
    char pad_91[0xf7];
    static USceneAction_ModifyMaterialParameterCollection* StaticClass();
}; // Size: 0x188
#pragma pack(pop)
