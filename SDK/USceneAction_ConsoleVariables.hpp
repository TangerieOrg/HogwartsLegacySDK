#pragma once
#include <cstdint>
#include "FSceneActionConsoleVariable.hpp"
#include "USceneAction_ConsoleBase.hpp"
#pragma pack(push, 1)
class USceneAction_ConsoleVariables : public USceneAction_ConsoleBase {
public:
    TArray<FSceneActionConsoleVariable> Variables; // 0x88
    bool bInShippingToo; // 0x98
    char pad_99[0x7];
    static USceneAction_ConsoleVariables* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
