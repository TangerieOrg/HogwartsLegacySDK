#pragma once
#include <cstdint>
#include "AActor.hpp"
class UPostProcessingVarsComponent;
class UPostProcessWithBlendDomainComponent;
class UUberExposureComponentExposureExpression;
class USceneComponent;
#pragma pack(push, 1)
class ABP_DayNightIndoorOutdoor_4Way_PP_C : public AActor {
public:
    UPostProcessingVarsComponent* PostProcessingVars_Time_Reflections; // 0x248
    UPostProcessWithBlendDomainComponent* PostProcess_ExtendedExposure; // 0x250
    UUberExposureComponentExposureExpression* UberExposureComponent_Auto_Whitebalance; // 0x258
    USceneComponent* DefaultSceneRoot; // 0x260
    float Priority; // 0x268
    bool Enabled; // 0x26c
    char pad_26d[0x3];
    static ABP_DayNightIndoorOutdoor_4Way_PP_C* StaticClass();
    void UserConstructionScript0();
}; // Size: 0x270
#pragma pack(pop)
