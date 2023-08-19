#pragma once
#include <cstdint>
#include "ENavigationOptionFlag\Type.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UNavigationPath : public UObject {
public:
    char pad_28[0x10];
    TArray<FVector> PathPoints; // 0x38
    ENavigationOptionFlag::Type RecalculateOnInvalidation; // 0x48
    char pad_49[0x3f];
    static UNavigationPath* StaticClass();
    bool IsValid();
    bool IsStringPulled();
    bool IsPartial();
    float GetPathLength();
    float GetPathCost();
    FString GetDebugString();
    void EnableRecalculationOnInvalidation(ENavigationOptionFlag::Type DoRecalculation);
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
}; // Size: 0x88
#pragma pack(pop)
