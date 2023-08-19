#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRig.hpp"
#pragma pack(push, 1)
class USceneRig_Intrusion : public USceneRig {
public:
    FSceneRigStage_Actor Enforcer; // 0x238
    FSceneRigStage_Transform RootLocation; // 0x250
    static USceneRig_Intrusion* StaticClass();
}; // Size: 0x268
#pragma pack(pop)
