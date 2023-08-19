#include "ARenderSettingsVolume.hpp"
#include "AVolume.hpp"
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
#include "URenderSettingsCustomBlendDomain.hpp"
#include "URenderSettingsLibrary.hpp"
ARenderSettingsVolume* ARenderSettingsVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsVolume");
    return (ARenderSettingsVolume*)res;
}
void ARenderSettingsVolume::UpdateCharacterLightRigAdjustments(URenderSettingsLibrary* Library) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.UpdateCharacterLightRigAdjustments"));
    struct Params_UpdateCharacterLightRigAdjustments {
        URenderSettingsLibrary* Library; // 0x0
    }; // Size: 0x8
    Params_UpdateCharacterLightRigAdjustments params{};
    params.Library = (URenderSettingsLibrary*)Library;
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::UpdateDistanceFog(URenderSettingsLibrary* Library) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.UpdateDistanceFog"));
    struct Params_UpdateDistanceFog {
        URenderSettingsLibrary* Library; // 0x0
    }; // Size: 0x8
    Params_UpdateDistanceFog params{};
    params.Library = (URenderSettingsLibrary*)Library;
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::UpdateEnginePostProcessing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.UpdateEnginePostProcessing"));
    struct Params_UpdateEnginePostProcessing {
    }; // Size: 0x0
    Params_UpdateEnginePostProcessing params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::SetPriority(float NewPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.SetPriority"));
    struct Params_SetPriority {
        float NewPriority; // 0x0
    }; // Size: 0x4
    Params_SetPriority params{};
    params.NewPriority = (float)NewPriority;
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::UpdateEmissiveAdaptation(URenderSettingsLibrary* Library) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.UpdateEmissiveAdaptation"));
    struct Params_UpdateEmissiveAdaptation {
        URenderSettingsLibrary* Library; // 0x0
    }; // Size: 0x8
    Params_UpdateEmissiveAdaptation params{};
    params.Library = (URenderSettingsLibrary*)Library;
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::EditProbes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.EditProbes"));
    struct Params_EditProbes {
    }; // Size: 0x0
    Params_EditProbes params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::UpdateAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.UpdateAll"));
    struct Params_UpdateAll {
    }; // Size: 0x0
    Params_UpdateAll params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::EditGroups() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.EditGroups"));
    struct Params_EditGroups {
    }; // Size: 0x0
    Params_EditGroups params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::EditExposure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.EditExposure"));
    struct Params_EditExposure {
    }; // Size: 0x0
    Params_EditExposure params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::EditDistanceFog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.EditDistanceFog"));
    struct Params_EditDistanceFog {
    }; // Size: 0x0
    Params_EditDistanceFog params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::EditColorGrading() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.EditColorGrading"));
    struct Params_EditColorGrading {
    }; // Size: 0x0
    Params_EditColorGrading params{};
    ProcessEvent(func, &params);
}
void ARenderSettingsVolume::EditAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsVolume.EditAll"));
    struct Params_EditAll {
    }; // Size: 0x0
    Params_EditAll params{};
    ProcessEvent(func, &params);
}
