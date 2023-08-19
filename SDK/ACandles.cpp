#include "ACandles.hpp"
#include "AStaticMeshActor.hpp"
#include "ELightUnits.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FWCullingPlane.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UDayNightLocalLightControllerComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UMaterialInstance.hpp"
#include "UObjectStateComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPointLightComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture.hpp"
ACandles* ACandles::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Candles");
    return (ACandles*)res;
}
void ACandles::SetUpLights(UPointLightComponent* curPL, USpotLightComponent* curSL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Candles.SetUpLights"));
    struct Params_SetUpLights {
        UPointLightComponent* curPL; // 0x0
        USpotLightComponent* curSL; // 0x8
    }; // Size: 0x10
    Params_SetUpLights params{};
    params.curPL = (UPointLightComponent*)curPL;
    params.curSL = (USpotLightComponent*)curSL;
    ProcessEvent(func, &params);
}
void ACandles::ChangeLightColor(FLinearColor i_Color, float i_temperature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Candles.ChangeLightColor"));
    struct Params_ChangeLightColor {
        FLinearColor i_Color; // 0x0
        float i_temperature; // 0x10
    }; // Size: 0x14
    Params_ChangeLightColor params{};
    params.i_Color = (FLinearColor)i_Color;
    params.i_temperature = (float)i_temperature;
    ProcessEvent(func, &params);
}
void ACandles::ResetLightColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Candles.ResetLightColor"));
    struct Params_ResetLightColor {
    }; // Size: 0x0
    Params_ResetLightColor params{};
    ProcessEvent(func, &params);
}
bool ACandles::CandleSetup(UObjectStateComponent* i_ObjectStateComp, uint8_t i_CandleType, UAnimatedLightComponent* i_AnimatedLight, UPointLightComponent* i_PL, USpotLightComponent* i_SL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Candles.CandleSetup"));
    struct Params_CandleSetup {
        UObjectStateComponent* i_ObjectStateComp; // 0x0
        uint8_t i_CandleType; // 0x8
        char pad_9[0x7];
        UAnimatedLightComponent* i_AnimatedLight; // 0x10
        UPointLightComponent* i_PL; // 0x18
        USpotLightComponent* i_SL; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_CandleSetup params{};
    params.i_ObjectStateComp = (UObjectStateComponent*)i_ObjectStateComp;
    params.i_CandleType = (uint8_t)i_CandleType;
    params.i_AnimatedLight = (UAnimatedLightComponent*)i_AnimatedLight;
    params.i_PL = (UPointLightComponent*)i_PL;
    params.i_SL = (USpotLightComponent*)i_SL;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACandles::CrossLightTickRange(bool bin) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Candles.CrossLightTickRange"));
    struct Params_CrossLightTickRange {
        bool bin; // 0x0
    }; // Size: 0x1
    Params_CrossLightTickRange params{};
    params.bin = (bool)bin;
    ProcessEvent(func, &params);
}
