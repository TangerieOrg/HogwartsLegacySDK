#include "AActor.hpp"
#include "ASkinFXDefinition.hpp"
#include "ASkinFXDefinitionGraph.hpp"
#include "ESkinFXDelegateEvent.hpp"
#include "ESkinFXEffectEndStyle.hpp"
#include "FLinearColor.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USkinFXComponent.hpp"
#include "UTexture.hpp"
void ASkinFXDefinitionGraph::SkinFXSignalFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXSignalFinished"));
    struct Params_SkinFXSignalFinished {
    }; // Size: 0x0
    Params_SkinFXSignalFinished params{};
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXGetAffectedActor(AActor*& AffectedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetAffectedActor"));
    struct Params_SkinFXGetAffectedActor {
        AActor* AffectedActor; // 0x0
    }; // Size: 0x8
    Params_SkinFXGetAffectedActor params{};
    params.AffectedActor = (AActor*)AffectedActor;
    ProcessEvent(func, &params);
    AffectedActor = params.AffectedActor;
}
ASkinFXDefinitionGraph* ASkinFXDefinitionGraph::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXDefinitionGraph");
    return (ASkinFXDefinitionGraph*)res;
}
void ASkinFXDefinitionGraph::SkinFXGetSkinFXComponent(USkinFXComponent*& RunningSkinFXComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetSkinFXComponent"));
    struct Params_SkinFXGetSkinFXComponent {
        USkinFXComponent* RunningSkinFXComponent; // 0x0
    }; // Size: 0x8
    Params_SkinFXGetSkinFXComponent params{};
    params.RunningSkinFXComponent = (USkinFXComponent*)RunningSkinFXComponent;
    ProcessEvent(func, &params);
    RunningSkinFXComponent = params.RunningSkinFXComponent;
}
void ASkinFXDefinitionGraph::SkinFXSetScalarParameter(FName ParameterName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXSetScalarParameter"));
    struct Params_SkinFXSetScalarParameter {
        FName ParameterName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SkinFXSetScalarParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::WantPerTickUpdateEvent(bool tickMe) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.WantPerTickUpdateEvent"));
    struct Params_WantPerTickUpdateEvent {
        bool tickMe; // 0x0
    }; // Size: 0x1
    Params_WantPerTickUpdateEvent params{};
    params.tickMe = (bool)tickMe;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXUpdateTick(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXUpdateTick"));
    struct Params_SkinFXUpdateTick {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXUpdateTick params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXSetTextureParameter(FName ParameterName, UTexture* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXSetTextureParameter"));
    struct Params_SkinFXSetTextureParameter {
        FName ParameterName; // 0x0
        UTexture* Value; // 0x8
    }; // Size: 0x10
    Params_SkinFXSetTextureParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (UTexture*)Value;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXSetColorParameter(FName ParameterName, FLinearColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXSetColorParameter"));
    struct Params_SkinFXSetColorParameter {
        FName ParameterName; // 0x0
        FLinearColor Value; // 0x8
    }; // Size: 0x18
    Params_SkinFXSetColorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (FLinearColor)Value;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXSetVectorParameter(FName ParameterName, FVector Value, float packAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXSetVectorParameter"));
    struct Params_SkinFXSetVectorParameter {
        FName ParameterName; // 0x0
        FVector Value; // 0x8
        float packAlpha; // 0x14
    }; // Size: 0x18
    Params_SkinFXSetVectorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.Value = (FVector)Value;
    params.packAlpha = (float)packAlpha;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXSetParameters(FMaterialSwapParameters& parameterValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXSetParameters"));
    struct Params_SkinFXSetParameters {
        FMaterialSwapParameters parameterValues; // 0x0
    }; // Size: 0x50
    Params_SkinFXSetParameters params{};
    params.parameterValues = (FMaterialSwapParameters)parameterValues;
    ProcessEvent(func, &params);
    parameterValues = params.parameterValues;
}
void ASkinFXDefinitionGraph::SkinFXNotifyStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXNotifyStart"));
    struct Params_SkinFXNotifyStart {
    }; // Size: 0x0
    Params_SkinFXNotifyStart params{};
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXNotifyRetrigger(float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXNotifyRetrigger"));
    struct Params_SkinFXNotifyRetrigger {
        float CurrentTime; // 0x0
    }; // Size: 0x4
    Params_SkinFXNotifyRetrigger params{};
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXNotifyKill() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXNotifyKill"));
    struct Params_SkinFXNotifyKill {
    }; // Size: 0x0
    Params_SkinFXNotifyKill params{};
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXNotifyEnd(ESkinFXEffectEndStyle EndStyle, float CurrentTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXNotifyEnd"));
    struct Params_SkinFXNotifyEnd {
        ESkinFXEffectEndStyle EndStyle; // 0x0
        char pad_1[0x3];
        float CurrentTime; // 0x4
    }; // Size: 0x8
    Params_SkinFXNotifyEnd params{};
    params.EndStyle = (ESkinFXEffectEndStyle)EndStyle;
    params.CurrentTime = (float)CurrentTime;
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXInitialUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXInitialUpdate"));
    struct Params_SkinFXInitialUpdate {
    }; // Size: 0x0
    Params_SkinFXInitialUpdate params{};
    ProcessEvent(func, &params);
}
void ASkinFXDefinitionGraph::SkinFXGetMyEffectName(FName& MyEffectName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetMyEffectName"));
    struct Params_SkinFXGetMyEffectName {
        FName MyEffectName; // 0x0
    }; // Size: 0x8
    Params_SkinFXGetMyEffectName params{};
    params.MyEffectName = (FName)MyEffectName;
    ProcessEvent(func, &params);
    MyEffectName = params.MyEffectName;
}
float ASkinFXDefinitionGraph::SkinFXGetEnvelopeValueLinear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetEnvelopeValueLinear"));
    struct Params_SkinFXGetEnvelopeValueLinear {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_SkinFXGetEnvelopeValueLinear params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ASkinFXDefinitionGraph::SkinFXGetEnvelopeValueCurve() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetEnvelopeValueCurve"));
    struct Params_SkinFXGetEnvelopeValueCurve {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_SkinFXGetEnvelopeValueCurve params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ASkinFXDefinitionGraph::SkinFXGetCurrentScalarParameter(FName ParameterName, float& ParameterValue, bool& bParameterFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetCurrentScalarParameter"));
    struct Params_SkinFXGetCurrentScalarParameter {
        FName ParameterName; // 0x0
        float ParameterValue; // 0x8
        bool bParameterFound; // 0xc
    }; // Size: 0xd
    Params_SkinFXGetCurrentScalarParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (float)ParameterValue;
    params.bParameterFound = (bool)bParameterFound;
    ProcessEvent(func, &params);
    bParameterFound = params.bParameterFound;
    ParameterValue = params.ParameterValue;
}
void ASkinFXDefinitionGraph::SkinFXGetCurrentParameters(FMaterialSwapParameters& CurrentParameters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetCurrentParameters"));
    struct Params_SkinFXGetCurrentParameters {
        FMaterialSwapParameters CurrentParameters; // 0x0
    }; // Size: 0x50
    Params_SkinFXGetCurrentParameters params{};
    params.CurrentParameters = (FMaterialSwapParameters)CurrentParameters;
    ProcessEvent(func, &params);
    CurrentParameters = params.CurrentParameters;
}
void ASkinFXDefinitionGraph::SkinFXGetCurrentColorParameter(FName ParameterName, FLinearColor& ParameterValue, bool& bParameterFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXGetCurrentColorParameter"));
    struct Params_SkinFXGetCurrentColorParameter {
        FName ParameterName; // 0x0
        FLinearColor ParameterValue; // 0x8
        bool bParameterFound; // 0x18
    }; // Size: 0x19
    Params_SkinFXGetCurrentColorParameter params{};
    params.ParameterName = (FName)ParameterName;
    params.ParameterValue = (FLinearColor)ParameterValue;
    params.bParameterFound = (bool)bParameterFound;
    ProcessEvent(func, &params);
    ParameterValue = params.ParameterValue;
    bParameterFound = params.bParameterFound;
}
void ASkinFXDefinitionGraph::SkinFXEventNotify(USkinFXComponent* RunningSkinFXComponent, ESkinFXDelegateEvent Event) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXEventNotify"));
    struct Params_SkinFXEventNotify {
        USkinFXComponent* RunningSkinFXComponent; // 0x0
        ESkinFXDelegateEvent Event; // 0x8
    }; // Size: 0x9
    Params_SkinFXEventNotify params{};
    params.RunningSkinFXComponent = (USkinFXComponent*)RunningSkinFXComponent;
    params.Event = (ESkinFXDelegateEvent)Event;
    ProcessEvent(func, &params);
}
bool ASkinFXDefinitionGraph::SkinFXApplyParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXDefinitionGraph.SkinFXApplyParameters"));
    struct Params_SkinFXApplyParameters {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SkinFXApplyParameters params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
