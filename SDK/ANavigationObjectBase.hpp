#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCapsuleComponent;
class UBillboardComponent;
#pragma pack(push, 1)
class ANavigationObjectBase : public AActor {
public:
    char pad_248[0x8];
    UCapsuleComponent* CapsuleComponent; // 0x250
    UBillboardComponent* GoodSprite; // 0x258
    UBillboardComponent* BadSprite; // 0x260
    uint8_t bIsPIEPlayerStart : 1; // 0x268
    uint8_t pad_bitfield_268_1 : 7;
    char pad_269[0x7];
    static ANavigationObjectBase* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
