#pragma once
#include <cstdint>
#include "FSceneRigStage_Object.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedObject : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Object Parameter; // 0x30
    static USceneRigStage_NamedObject* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
