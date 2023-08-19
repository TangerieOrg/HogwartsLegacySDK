#pragma once
#include <cstdint>
#include "FSceneRigStage_Vector.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedVector : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Vector Parameter; // 0x30
    static USceneRigStage_NamedVector* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
