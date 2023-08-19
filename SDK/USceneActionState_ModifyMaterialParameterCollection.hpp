#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ModifyMaterialParameterCollection : public USceneRigActionState {
public:
    char pad_50[0x8];
    static USceneActionState_ModifyMaterialParameterCollection* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
