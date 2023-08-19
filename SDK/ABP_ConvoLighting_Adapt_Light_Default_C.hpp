#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDynamicLightAdaptationSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ULightAdaptationComponentChildOfLight;
class UCurveFloat;
class UDayNightTemperatureCurveLightControllerComponent;
class UArrowComponent;
class USpotLightComponent;
class USceneComponent;
class UPostProcessComponent;
#pragma pack(push, 1)
class ABP_ConvoLighting_Adapt_Light_Default_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    ULightAdaptationComponentChildOfLight* LightAdaptationComponentChildOfLight_Fill; // 0x250
    UDayNightTemperatureCurveLightControllerComponent* DayNightTemperatureCurveLightController_Key; // 0x258
    UDayNightTemperatureCurveLightControllerComponent* DayNightTemperatureCurveLightController_Rim; // 0x260
    UDayNightTemperatureCurveLightControllerComponent* DayNightTemperatureCurveLightController_fill; // 0x268
    UArrowComponent* Fill_Direction; // 0x270
    USpotLightComponent* Fill; // 0x278
    USceneComponent* Fill_Parent; // 0x280
    UArrowComponent* Rim_Direction; // 0x288
    UArrowComponent* Key_Direction; // 0x290
    UArrowComponent* Arrow_Camera_Facing; // 0x298
    UPostProcessComponent* PostProcess; // 0x2a0
    ULightAdaptationComponentChildOfLight* LightAdaptationComponentChildOfLight_Rim; // 0x2a8
    ULightAdaptationComponentChildOfLight* LightAdaptationComponentChildOfLight_Key; // 0x2b0
    USceneComponent* Rim_Parent; // 0x2b8
    USpotLightComponent* Rim; // 0x2c0
    USpotLightComponent* Key; // 0x2c8
    USceneComponent* Key_Parent; // 0x2d0
    USceneComponent* DefaultSceneRoot; // 0x2d8
    float Light_Temperature_Key; // 0x2e0
    float Light_Temperature_Rim; // 0x2e4
    float Light_Temperature_Fill; // 0x2e8
    bool Uses_sky_Colors; // 0x2ec
    char pad_2ed[0x3];
    UCurveFloat* Rim_temperature_curve; // 0x2f0
    UCurveFloat* Key_temperature_curve; // 0x2f8
    UCurveFloat* Fill_temperature_curve; // 0x300
    FDynamicLightAdaptationSettings LightAdaptationSettings; // 0x308
    static ABP_ConvoLighting_Adapt_Light_Default_C* StaticClass();
    void SetLightTemperatureValues();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason);
}; // Size: 0x368
#pragma pack(pop)
