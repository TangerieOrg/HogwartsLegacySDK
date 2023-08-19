#pragma once
#include <cstdint>
#include "UObject.hpp"
class USplineComponent;
class UCameraStack;
#pragma pack(push, 1)
class UCameraStackSplineGetter : public UObject {
public:
    char pad_28[0x8];
    static UCameraStackSplineGetter* StaticClass();
    void Update(float DeltaSeconds);
    bool IsValid();
    USplineComponent* GetSpline();
    void Activate(UCameraStack* InList);
}; // Size: 0x30
#pragma pack(pop)
