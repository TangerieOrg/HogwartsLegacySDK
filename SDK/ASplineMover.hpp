#pragma once
#include <cstdint>
#include "AWorldEventActor.hpp"
class USplineComponent;
#pragma pack(push, 1)
class ASplineMover : public AWorldEventActor {
public:
    bool bIsVisibleBeforeActive; // 0x280
    char pad_281[0x3];
    float Offset; // 0x284
    float MaxVelocity; // 0x288
    float InterpSpeed; // 0x28c
    float Distance; // 0x290
    float Velocity; // 0x294
    USplineComponent* SplineComponent; // 0x298
    int32_t CurrentSplinePointIndex; // 0x2a0
    bool HasPositionUpdated; // 0x2a4
    char pad_2a5[0xb];
    static ASplineMover* StaticClass();
    void DeactivateSplineMover();
    void ActivateSplineMover();
}; // Size: 0x2b0
#pragma pack(pop)
