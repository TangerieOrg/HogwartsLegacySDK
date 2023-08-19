#pragma once
#include <cstdint>
#include "FSceneRigStage_Transform.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedTransform : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Transform Parameter; // 0x30
    static USceneRigStage_NamedTransform* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
