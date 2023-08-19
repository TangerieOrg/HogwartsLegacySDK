#pragma once
#include <cstdint>
#include "AActor.hpp"
class UShapeComponent;
#pragma pack(push, 1)
class ANPC_Volume : public AActor {
public:
    UShapeComponent* CollisionComponent; // 0x248
    char pad_250[0x58];
    static ANPC_Volume* StaticClass();
    void SetActive(bool bInActive);
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
    bool GetActive();
}; // Size: 0x2a8
#pragma pack(pop)
