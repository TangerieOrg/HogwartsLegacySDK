#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class ULightComponentState;
#pragma pack(push, 1)
class USceneAction_LightComponentStates : public USceneRigObjectActionBase {
public:
    TArray<ULightComponentState*> States; // 0xa0
    bool bIncludeChildActors; // 0xb0
    bool bUpdateEveryFrame; // 0xb1
    char pad_b2[0x6];
    static USceneAction_LightComponentStates* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
