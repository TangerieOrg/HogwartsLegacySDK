#pragma once
#include <cstdint>
#include "AWorldEventLocationActor.hpp"
class UArrowComponent;
class UChildActorComponent;
#pragma pack(push, 1)
class ABP_WorldEventLocator_C : public AWorldEventLocationActor {
public:
    UArrowComponent* Arrow_Editor_Only_; // 0x340
    UChildActorComponent* BP_WorldEventLocator_Marker_Editor_Only_; // 0x348
    static ABP_WorldEventLocator_C* StaticClass();
}; // Size: 0x350
#pragma pack(pop)
