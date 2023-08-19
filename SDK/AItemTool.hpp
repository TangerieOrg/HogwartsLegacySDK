#pragma once
#include <cstdint>
#include "ATool.hpp"
class UStaticMeshComponent;
class ACharacter;
class UClass;
class UItemToolRecord;
#pragma pack(push, 1)
class AItemTool : public ATool {
public:
    UStaticMeshComponent* Mesh; // 0x2e0
    UClass* AbleExecutionClass; // 0x2e8
    static AItemTool* StaticClass();
    UItemToolRecord* GetItemToolRecord();
    ACharacter* GetCharacter();
}; // Size: 0x2f0
#pragma pack(pop)
