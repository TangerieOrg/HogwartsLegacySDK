#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UObjectProvider;
#pragma pack(push, 1)
class USceneRigStage_ObjectValue : public USceneRigStage_ParameterValue {
public:
    UObjectProvider* Provider; // 0x28
    static USceneRigStage_ObjectValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
