#pragma once
#include <cstdint>
#include "FSceneRigStage_Float.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedFloat : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Float Parameter; // 0x30
    static USceneRigStage_NamedFloat* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
