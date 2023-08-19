#pragma once
#include <cstdint>
#include "UNiagaraMaterialDriverComponent.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UNiagaraMIDDriverComponent : public UNiagaraMaterialDriverComponent {
public:
    char pad_2b0[0x10];
    static UNiagaraMIDDriverComponent* StaticClass();
    void RemoveMID(UMaterialInstanceDynamic* Mid);
    void EmptyMIDs();
    void AddMID(UMaterialInstanceDynamic* Mid);
}; // Size: 0x2c0
#pragma pack(pop)
