#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UNameProvider;
#pragma pack(push, 1)
class USceneRigStage_NameValue : public USceneRigStage_ParameterValue {
public:
    UNameProvider* Provider; // 0x28
    static USceneRigStage_NameValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
