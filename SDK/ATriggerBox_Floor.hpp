#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class ATriggerBox_Floor : public ATriggerBox {
public:
    static ATriggerBox_Floor* StaticClass();
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
}; // Size: 0x250
#pragma pack(pop)
