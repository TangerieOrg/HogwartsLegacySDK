#pragma once
#include <cstdint>
#include "FSceneRigStage_Name.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedName : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Name Parameter; // 0x30
    static USceneRigStage_NamedName* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
