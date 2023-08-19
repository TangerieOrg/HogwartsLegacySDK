#include "EBlendDomainLightingMode.hpp"
#include "ERenderSettingsIndoorsType.hpp"
#include "ERenderSettingsVolumeDayNightType.hpp"
#include "ERenderSettingsVolumeIndoorsOutdoorsType.hpp"
#include "ERenderSettingsVolumeOvercastType.hpp"
#include "FBlendDomainIndoorsOutdoorsCurve.hpp"
#include "FBlendDomainNormalizedTimeCurve.hpp"
#include "FCharacterLightRigAdjustments.hpp"
#include "FCharacterLightRigAdjustmentsName.hpp"
#include "FDistanceFog.hpp"
#include "FDistanceFogName.hpp"
#include "FDistanceFogOverrides.hpp"
#include "FPostProcessSettings.hpp"
#include "FRenderSettingsEmissiveAdaptationName.hpp"
#include "FRenderSettingsPostProcessing.hpp"
#include "UFunction.hpp"
#include "URenderSettingsComponent.hpp"
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsLibrary.hpp"
#include "USceneComponent.hpp"
URenderSettingsComponent* URenderSettingsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsComponent");
    return (URenderSettingsComponent*)res;
}
void URenderSettingsComponent::UpdateEnginePostProcessing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.UpdateEnginePostProcessing"));
    struct Params_UpdateEnginePostProcessing {
    }; // Size: 0x0
    Params_UpdateEnginePostProcessing params{};
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::UpdateEmissiveAdaptation(URenderSettingsLibrary* Library) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.UpdateEmissiveAdaptation"));
    struct Params_UpdateEmissiveAdaptation {
        URenderSettingsLibrary* Library; // 0x0
    }; // Size: 0x8
    Params_UpdateEmissiveAdaptation params{};
    params.Library = (URenderSettingsLibrary*)Library;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::SetPostProcessing(FRenderSettingsPostProcessing NewPostProcessing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.SetPostProcessing"));
    struct Params_SetPostProcessing {
        FRenderSettingsPostProcessing NewPostProcessing; // 0x0
    }; // Size: 0x5c
    Params_SetPostProcessing params{};
    params.NewPostProcessing = (FRenderSettingsPostProcessing)NewPostProcessing;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::UpdateDistanceFog(URenderSettingsLibrary* Library) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.UpdateDistanceFog"));
    struct Params_UpdateDistanceFog {
        URenderSettingsLibrary* Library; // 0x0
    }; // Size: 0x8
    Params_UpdateDistanceFog params{};
    params.Library = (URenderSettingsLibrary*)Library;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::ClearDistanceFog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.ClearDistanceFog"));
    struct Params_ClearDistanceFog {
    }; // Size: 0x0
    Params_ClearDistanceFog params{};
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::UpdateAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.UpdateAll"));
    struct Params_UpdateAll {
    }; // Size: 0x0
    Params_UpdateAll params{};
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::UpdateCharacterLightRigAdjustments(URenderSettingsLibrary* Library) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.UpdateCharacterLightRigAdjustments"));
    struct Params_UpdateCharacterLightRigAdjustments {
        URenderSettingsLibrary* Library; // 0x0
    }; // Size: 0x8
    Params_UpdateCharacterLightRigAdjustments params{};
    params.Library = (URenderSettingsLibrary*)Library;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::SetExposureTweak(float NewExposureTweak, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.SetExposureTweak"));
    struct Params_SetExposureTweak {
        float NewExposureTweak; // 0x0
        bool bEnable; // 0x4
    }; // Size: 0x5
    Params_SetExposureTweak params{};
    params.NewExposureTweak = (float)NewExposureTweak;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::ClearEmissiveAdaptation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.ClearEmissiveAdaptation"));
    struct Params_ClearEmissiveAdaptation {
    }; // Size: 0x0
    Params_ClearEmissiveAdaptation params{};
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::SetEmissiveAdaptation(FRenderSettingsEmissiveAdaptationName NewEmissiveAdaptation, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.SetEmissiveAdaptation"));
    struct Params_SetEmissiveAdaptation {
        FRenderSettingsEmissiveAdaptationName NewEmissiveAdaptation; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_SetEmissiveAdaptation params{};
    params.NewEmissiveAdaptation = (FRenderSettingsEmissiveAdaptationName)NewEmissiveAdaptation;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::SetDistanceFog(FDistanceFogName NewDistanceFog, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.SetDistanceFog"));
    struct Params_SetDistanceFog {
        FDistanceFogName NewDistanceFog; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_SetDistanceFog params{};
    params.NewDistanceFog = (FDistanceFogName)NewDistanceFog;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::SetCharacterLightRigAdjustments(FCharacterLightRigAdjustmentsName NewCharacterLightRigAdjustments, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.SetCharacterLightRigAdjustments"));
    struct Params_SetCharacterLightRigAdjustments {
        FCharacterLightRigAdjustmentsName NewCharacterLightRigAdjustments; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_SetCharacterLightRigAdjustments params{};
    params.NewCharacterLightRigAdjustments = (FCharacterLightRigAdjustmentsName)NewCharacterLightRigAdjustments;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::ClearExposureTweak() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.ClearExposureTweak"));
    struct Params_ClearExposureTweak {
    }; // Size: 0x0
    Params_ClearExposureTweak params{};
    ProcessEvent(func, &params);
}
void URenderSettingsComponent::ClearCharacterLightRigAdjustments() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsComponent.ClearCharacterLightRigAdjustments"));
    struct Params_ClearCharacterLightRigAdjustments {
    }; // Size: 0x0
    Params_ClearCharacterLightRigAdjustments params{};
    ProcessEvent(func, &params);
}
