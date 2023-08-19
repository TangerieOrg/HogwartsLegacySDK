#pragma once
#include <cstdint>
#include "UObject.hpp"
class UNPC_QBUpdate;
class UNPC_PerceptionUpdate;
#pragma pack(push, 1)
class UNPC_Manager : public UObject {
public:
    char pad_28[0x10];
    TArray<void*> NPCList; // 0x38
    TArray<void*> PerceptionPointList; // 0x48
    TArray<UNPC_QBUpdate*> QBUpdatePtrArray; // 0x58
    TArray<UNPC_PerceptionUpdate*> PerceptionUpdatePtrArray; // 0x68
    TArray<void*> NPCComponentList; // 0x78
    char pad_88[0x58];
    static UNPC_Manager* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
