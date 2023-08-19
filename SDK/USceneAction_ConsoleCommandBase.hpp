#pragma once
#include <cstdint>
#include "FSceneActionConsoleCommand.hpp"
#include "USceneAction_ConsoleBase.hpp"
#pragma pack(push, 1)
class USceneAction_ConsoleCommandBase : public USceneAction_ConsoleBase {
public:
    TArray<FSceneActionConsoleCommand> Commands; // 0x88
    static USceneAction_ConsoleCommandBase* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
