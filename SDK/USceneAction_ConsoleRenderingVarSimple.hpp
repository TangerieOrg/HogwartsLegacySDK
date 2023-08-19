#pragma once
#include <cstdint>
#include "FConsoleVariableLienEntry.hpp"
#include "USceneAction_ConsoleRenderingVar.hpp"
#pragma pack(push, 1)
class USceneAction_ConsoleRenderingVarSimple : public USceneAction_ConsoleRenderingVar {
public:
    FConsoleVariableLienEntry Console; // 0x88
    static USceneAction_ConsoleRenderingVarSimple* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
