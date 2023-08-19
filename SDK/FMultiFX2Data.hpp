#pragma once
#include <cstdint>
class UMultiFX2_Base;
class UObject;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FMultiFX2Data {
    char pad_0[0x8];
    UMultiFX2_Base* MultiBase; // 0x8
    char pad_10[0x30];
    UObject* FXObject; // 0x40
    UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x48
    char pad_50[0x30];
    TArray<UObject*> AdditionalObjectArray; // 0x80
    char pad_90[0x10];
}; // Size: 0xa0
#pragma pack(pop)
