#pragma once
#include <cstdint>
#include "UBoxComponent.hpp"
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#pragma pack(push, 1)
class UEnvClothCollidingWithPawns : public UBoxComponent {
public:
    static UEnvClothCollidingWithPawns* StaticClass();
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo);
}; // Size: 0x4b0
#pragma pack(pop)
