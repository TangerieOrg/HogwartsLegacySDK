#pragma once
#include <cstdint>
#include "FEmissiveAdaptationFinalState.hpp"
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_Adaptation : public USceneRigActionState {
public:
    char pad_50[0x8];
    FEmissiveAdaptationFinalState InitialState; // 0x58
    float CurrentTime; // 0xe0
    bool bInitialStateValid; // 0xe4
    bool bInserted; // 0xe5
    char pad_e6[0x2];
    static USceneActionState_Adaptation* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
