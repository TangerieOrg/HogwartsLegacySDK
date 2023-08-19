#pragma once
#include <cstdint>
#include "UObject.hpp"
class USceneRigStageParameterBlock;
class UWorld;
#pragma pack(push, 1)
class USceneRigStageContainer : public UObject {
public:
    char pad_28[0x10];
    USceneRigStageParameterBlock* StageParameters; // 0x38
    UWorld* StageWorld; // 0x40
    static USceneRigStageContainer* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
