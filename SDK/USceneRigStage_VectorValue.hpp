#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UVectorProvider;
#pragma pack(push, 1)
class USceneRigStage_VectorValue : public USceneRigStage_ParameterValue {
public:
    UVectorProvider* Provider; // 0x28
    static USceneRigStage_VectorValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
