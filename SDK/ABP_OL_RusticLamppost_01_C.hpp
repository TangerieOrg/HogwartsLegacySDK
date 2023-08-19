#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class UPointLightComponent;
class USpotLightComponent;
#pragma pack(push, 1)
class ABP_OL_RusticLamppost_01_C : public ABP_LightFixture_Master_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0xaf0
    UChildActorComponent* ChildActor; // 0xaf8
    UPointLightComponent* Point_Light_0; // 0xb00
    USpotLightComponent* Spot_Light_0; // 0xb08
    static ABP_OL_RusticLamppost_01_C* StaticClass();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OL_RusticLamppost_01(int32_t EntryPoint);
}; // Size: 0xb10
#pragma pack(pop)
