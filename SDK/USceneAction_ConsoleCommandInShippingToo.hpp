#pragma once
#include <cstdint>
#include "USceneAction_ConsoleCommandBase.hpp"
#pragma pack(push, 1)
class USceneAction_ConsoleCommandInShippingToo : public USceneAction_ConsoleCommandBase {
public:
    bool bInShippingToo; // 0x98
    char pad_99[0x7];
    static USceneAction_ConsoleCommandInShippingToo* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
