#pragma once
#include <cstdint>
#include "ESequenceEvalReinit\Type.hpp"
#include "FAnimNode_AssetPlayerBase.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase {
    UAnimSequenceBase* Sequence; // 0x38
    float ExplicitTime; // 0x40
    bool bShouldLoop; // 0x44
    bool bTeleportToExplicitTime; // 0x45
    ESequenceEvalReinit::Type ReinitializationBehavior; // 0x46
    char pad_47[0x1];
    float StartPosition; // 0x48
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)
