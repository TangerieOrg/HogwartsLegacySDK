#pragma once
#include <cstdint>
#include "UNavAreaMeta.hpp"
class UClass;
#pragma pack(push, 1)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta {
public:
    UClass* Agent0Area; // 0x48
    UClass* Agent1Area; // 0x50
    UClass* Agent2Area; // 0x58
    UClass* Agent3Area; // 0x60
    UClass* Agent4Area; // 0x68
    UClass* Agent5Area; // 0x70
    UClass* Agent6Area; // 0x78
    UClass* Agent7Area; // 0x80
    UClass* Agent8Area; // 0x88
    UClass* Agent9Area; // 0x90
    UClass* Agent10Area; // 0x98
    UClass* Agent11Area; // 0xa0
    UClass* Agent12Area; // 0xa8
    UClass* Agent13Area; // 0xb0
    UClass* Agent14Area; // 0xb8
    UClass* Agent15Area; // 0xc0
    static UNavAreaMeta_SwitchByAgent* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
