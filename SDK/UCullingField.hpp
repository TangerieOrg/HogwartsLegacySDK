#pragma once
#include <cstdint>
#include "EFieldCullingOperationType.hpp"
#include "UFieldNodeBase.hpp"
#pragma pack(push, 1)
class UCullingField : public UFieldNodeBase {
public:
    UFieldNodeBase* Culling; // 0xc8
    UFieldNodeBase* Field; // 0xd0
    EFieldCullingOperationType Operation; // 0xd8
    char pad_d9[0x7];
    static UCullingField* StaticClass();
    UCullingField* SetCullingField(UFieldNodeBase* Culling, UFieldNodeBase* Field, EFieldCullingOperationType Operation);
}; // Size: 0xe0
#pragma pack(pop)
