#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedParameter : public UObject {
public:
    FName ParameterName; // 0x28
    static USceneRigStage_NamedParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
