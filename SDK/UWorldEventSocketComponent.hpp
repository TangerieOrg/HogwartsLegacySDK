#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "USceneComponent.hpp"
class USplineComponent;
struct FTransform;
class UShapeComponent;
#pragma pack(push, 1)
class UWorldEventSocketComponent : public USceneComponent {
public:
    USplineComponent* SplineComponent; // 0x220
    UShapeComponent* ShapeComponent; // 0x228
    char pad_230[0x8];
    FGameplayTagContainer SocketDescriptors; // 0x238
    char pad_258[0x8];
    static UWorldEventSocketComponent* StaticClass();
    void SetSocketOccupied(bool bInOccupied);
    bool IsSocketOccupied();
    USplineComponent* GetSplineComponent();
    FGameplayTagContainer GetSocketDescriptors();
    UShapeComponent* GetShapeComponent();
    void Construct(FTransform& Transform);
}; // Size: 0x260
#pragma pack(pop)
