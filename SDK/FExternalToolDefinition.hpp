#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FFilePath.hpp"
#pragma pack(push, 1)
struct FExternalToolDefinition {
    FString ToolName; // 0x0
    FFilePath ExecutablePath; // 0x10
    FString CommandLineOptions; // 0x20
    FDirectoryPath WorkingDirectory; // 0x30
    FString ScriptExtension; // 0x40
    FDirectoryPath ScriptDirectory; // 0x50
}; // Size: 0x60
#pragma pack(pop)
