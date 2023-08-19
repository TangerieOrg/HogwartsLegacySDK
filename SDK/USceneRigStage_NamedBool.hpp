#pragma once
#include <cstdint>
#include "FSceneRigStage_Bool.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedBool : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Bool Parameter; // 0x30
    static USceneRigStage_NamedBool* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
