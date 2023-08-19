#pragma once
#include <cstdint>
#include "FSceneRigStage_String.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedString : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_String Parameter; // 0x30
    static USceneRigStage_NamedString* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
