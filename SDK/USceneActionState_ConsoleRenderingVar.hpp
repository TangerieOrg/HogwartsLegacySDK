#pragma once
#include <cstdint>
#include "FConsoleVariableFlexValue.hpp"
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ConsoleRenderingVar : public USceneRigActionState {
public:
    FString Variable; // 0x50
    FConsoleVariableFlexValue Value; // 0x60
    static USceneActionState_ConsoleRenderingVar* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
