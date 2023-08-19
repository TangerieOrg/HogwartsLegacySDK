#pragma once
#include <cstdint>
#include "AActor.hpp"
class UShapeComponent;
#pragma pack(push, 1)
class APerceptionPointArea : public AActor {
public:
    UShapeComponent* CollisionComponent; // 0x248
    char pad_250[0x78];
    static APerceptionPointArea* StaticClass();
    void SetActive(bool bInActive);
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
    bool GetActive();
}; // Size: 0x2c8
#pragma pack(pop)
