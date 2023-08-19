#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UUI_BPI_TargetCalloutInterface_C : public UInterface {
public:
    static UUI_BPI_TargetCalloutInterface_C* StaticClass();
    void SetupCreatureUI(AActor* CreatureActor, bool IsTamed);
    void SetCalloutVisibility(bool IsVisible);
}; // Size: 0x28
#pragma pack(pop)
