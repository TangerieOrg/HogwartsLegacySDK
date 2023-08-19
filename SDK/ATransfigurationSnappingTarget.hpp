#pragma once
#include <cstdint>
#include "AActor.hpp"
class UConjurationSnappingComponentBase;
struct FVector;
#pragma pack(push, 1)
class ATransfigurationSnappingTarget : public AActor {
public:
    UConjurationSnappingComponentBase* TargetObject; // 0x248
    static ATransfigurationSnappingTarget* StaticClass();
    void ShowBeamAtLocalLocation(FVector& InLocationLocal);
    void SetTargetObject(UConjurationSnappingComponentBase* SnappingTarget);
    void FadeOutAndDestroy();
    void ClearLitBeams();
}; // Size: 0x250
#pragma pack(pop)
