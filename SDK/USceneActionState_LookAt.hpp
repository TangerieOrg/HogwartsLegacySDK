#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UAimEyesData;
#pragma pack(push, 1)
class USceneActionState_LookAt : public USceneRigObjectActionState {
public:
    char pad_70[0x18];
    UAimEyesData* PrevIdleAimEyes; // 0x88
    UAimEyesData* PrevSpeakingAimEyes; // 0x90
    UAimEyesData* PrevListeningAimEyes; // 0x98
    static USceneActionState_LookAt* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
