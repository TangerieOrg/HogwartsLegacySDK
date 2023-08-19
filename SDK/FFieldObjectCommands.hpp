#pragma once
#include <cstdint>
class UFieldNodeBase;
class UFieldSystemMetaData;
#pragma pack(push, 1)
struct FFieldObjectCommands {
    TArray<FName> TargetNames; // 0x0
    TArray<UFieldNodeBase*> RootNodes; // 0x10
    TArray<UFieldSystemMetaData*> MetaDatas; // 0x20
}; // Size: 0x30
#pragma pack(pop)
