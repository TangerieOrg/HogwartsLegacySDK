#pragma once
#include <cstdint>
#include "FSceneRigObjectActionBase_ComponentName.hpp"
#include "FSetProperty_PropertyName.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_SetProperty : public USceneRigObjectActionBase {
public:
    bool bConstant; // 0xa0
    bool bKeepStateOnCompletion; // 0xa1
    char pad_a2[0x2];
    FSceneRigObjectActionBase_ComponentName ComponentName; // 0xa4
    FSetProperty_PropertyName PropertyName; // 0xac
    char pad_b4[0x4];
    static USceneAction_SetProperty* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
