#pragma once
#include <cstdint>
class UStruct;
#pragma pack(push, 1)
struct FSceneRigStage_ParameterReference {
    UStruct* ParameterType; // 0x0
    FName ReferenceName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
