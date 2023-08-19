#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition : public UObject {
public:
    FString Name; // 0x28
    static USceneRigParameterDefinition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
