#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ConsoleVariableScalarCurve : public USceneRigActionState {
public:
    char pad_50[0x30];
    static USceneActionState_ConsoleVariableScalarCurve* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
