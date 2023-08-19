#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_CharacterTurnToFace : public USceneRigObjectActionBase {
public:
    UTransformProvider* WorldSpaceTransform; // 0xa0
    static USceneAction_CharacterTurnToFace* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
