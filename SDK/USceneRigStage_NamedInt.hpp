#pragma once
#include <cstdint>
#include "FSceneRigStage_Int.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedInt : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Int Parameter; // 0x30
    static USceneRigStage_NamedInt* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
