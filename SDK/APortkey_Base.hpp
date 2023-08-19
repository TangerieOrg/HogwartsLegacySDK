#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FTransform.hpp"
class APortkey_Object;
class UPrimitiveComponent;
#pragma pack(push, 1)
class APortkey_Base : public AActor {
public:
    bool bReturnToBase; // 0x248
    char pad_249[0x7];
    FTransform TargetTrans; // 0x250
    FTransform PlayerTrans; // 0x280
    APortkey_Object* PortkeyObject; // 0x2b0
    bool bStartingAtBase; // 0x2b8
    char pad_2b9[0x7];
    static APortkey_Base* StaticClass();
    void PortkeyTeleport();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
}; // Size: 0x2c0
#pragma pack(pop)
