#pragma once
#include <cstdint>
#include "UObject.hpp"
class USCS_Node;
#pragma pack(push, 1)
class USimpleConstructionScript : public UObject {
public:
    TArray<USCS_Node*> RootNodes; // 0x28
    TArray<USCS_Node*> AllNodes; // 0x38
    USCS_Node* DefaultSceneRootNode; // 0x48
    char pad_50[0x50];
    static USimpleConstructionScript* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
