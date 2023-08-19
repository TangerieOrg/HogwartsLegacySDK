#include "AActor.hpp"
#include "ARenderSettingsSingleton.hpp"
#include "ERenderSettingsIndoorsType.hpp"
#include "FBlendDomainState.hpp"
#include "FDistanceFog.hpp"
#include "FDistanceFogCompute.hpp"
#include "FEmissiveAdaptationStateCompute.hpp"
#include "FLastRenderedExposure.hpp"
#include "FLastRenderedExposurePair.hpp"
#include "FLightAdaptationTracker.hpp"
#include "FPlayerCentricPostProcessingOverrides.hpp"
#include "FPostProcessSettings.hpp"
#include "FRenderSettingsEmissiveAdaptation.hpp"
#include "FRenderSettingsPostProcessingGroup.hpp"
#include "FVector.hpp"
#include "UDirectionalLightComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlayerCentricPostProcessingComponent.hpp"
#include "UPostProcessComponent.hpp"
ARenderSettingsSingleton* ARenderSettingsSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsSingleton");
    return (ARenderSettingsSingleton*)res;
}
float ARenderSettingsSingleton::RenderSettingsGetOvercast(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.RenderSettingsGetOvercast"));
    struct Params_RenderSettingsGetOvercast {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RenderSettingsGetOvercast params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARenderSettingsSingleton::RenderSettingsGetDayNight(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.RenderSettingsGetDayNight"));
    struct Params_RenderSettingsGetDayNight {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_RenderSettingsGetDayNight params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARenderSettingsSingleton::RenderSettingsGetIndoors(UObject* WorldContextObject, ERenderSettingsIndoorsType IndoorsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.RenderSettingsGetIndoors"));
    struct Params_RenderSettingsGetIndoors {
        UObject* WorldContextObject; // 0x0
        ERenderSettingsIndoorsType IndoorsType; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_RenderSettingsGetIndoors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.IndoorsType = (ERenderSettingsIndoorsType)IndoorsType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ARenderSettingsSingleton::PushPlayerViewpointOverride(UObject* WorldContextObject, UObject* ViewpointOverrideOwner, float PostProcessingViewpointOverride, float LerpAlpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.PushPlayerViewpointOverride"));
    struct Params_PushPlayerViewpointOverride {
        UObject* WorldContextObject; // 0x0
        UObject* ViewpointOverrideOwner; // 0x8
        float PostProcessingViewpointOverride; // 0x10
        float LerpAlpha; // 0x14
    }; // Size: 0x18
    Params_PushPlayerViewpointOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ViewpointOverrideOwner = (UObject*)ViewpointOverrideOwner;
    params.PostProcessingViewpointOverride = (float)PostProcessingViewpointOverride;
    params.LerpAlpha = (float)LerpAlpha;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ARenderSettingsSingleton::PopPlayerViewpointOverride(UObject* WorldContextObject, UObject* ViewpointOverrideOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.PopPlayerViewpointOverride"));
    struct Params_PopPlayerViewpointOverride {
        UObject* WorldContextObject; // 0x0
        UObject* ViewpointOverrideOwner; // 0x8
    }; // Size: 0x10
    Params_PopPlayerViewpointOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ViewpointOverrideOwner = (UObject*)ViewpointOverrideOwner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ARenderSettingsSingleton::CustomBlendDomainGetOverride(UObject* WorldContextObject, FName CustomBlendDomainName, float& Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainGetOverride"));
    struct Params_CustomBlendDomainGetOverride {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
        float Value; // 0x10
        bool bExists; // 0x14
    }; // Size: 0x15
    Params_CustomBlendDomainGetOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    params.Value = (float)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    bExists = params.bExists;
}
void ARenderSettingsSingleton::GetBlendDomainValueBool(FBlendDomainState& BlendDomainState, FName BlendDomain, bool& bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetBlendDomainValueBool"));
    struct Params_GetBlendDomainValueBool {
        FBlendDomainState BlendDomainState; // 0x0
        FName BlendDomain; // 0xf8
        bool bValue; // 0x100
    }; // Size: 0x101
    Params_GetBlendDomainValueBool params{};
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    params.BlendDomain = (FName)BlendDomain;
    params.bValue = (bool)bValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BlendDomainState = params.BlendDomainState;
    bValue = params.bValue;
}
void ARenderSettingsSingleton::IsCameraIndoors(UObject* WorldContextObject, float& Indoors0To1, bool& bIsIndoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.IsCameraIndoors"));
    struct Params_IsCameraIndoors {
        UObject* WorldContextObject; // 0x0
        float Indoors0To1; // 0x8
        bool bIsIndoors; // 0xc
    }; // Size: 0xd
    Params_IsCameraIndoors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Indoors0To1 = (float)Indoors0To1;
    params.bIsIndoors = (bool)bIsIndoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors0To1 = params.Indoors0To1;
    bIsIndoors = params.bIsIndoors;
}
void ARenderSettingsSingleton::IsPlayerIndoors(UObject* WorldContextObject, float& Indoors0To1, bool& bIsIndoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.IsPlayerIndoors"));
    struct Params_IsPlayerIndoors {
        UObject* WorldContextObject; // 0x0
        float Indoors0To1; // 0x8
        bool bIsIndoors; // 0xc
    }; // Size: 0xd
    Params_IsPlayerIndoors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Indoors0To1 = (float)Indoors0To1;
    params.bIsIndoors = (bool)bIsIndoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors0To1 = params.Indoors0To1;
    bIsIndoors = params.bIsIndoors;
}
float ARenderSettingsSingleton::GetFilteredIndoors(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetFilteredIndoors"));
    struct Params_GetFilteredIndoors {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetFilteredIndoors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ARenderSettingsSingleton::HasPlayerViewpointOverride(UObject* WorldContextObject, UObject* ViewpointOverrideOwner, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.HasPlayerViewpointOverride"));
    struct Params_HasPlayerViewpointOverride {
        UObject* WorldContextObject; // 0x0
        UObject* ViewpointOverrideOwner; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_HasPlayerViewpointOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ViewpointOverrideOwner = (UObject*)ViewpointOverrideOwner;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ARenderSettingsSingleton::GetViewpointIsInside(UObject* WorldContextObject, float& Indoors, ERenderSettingsIndoorsType IndoorsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetViewpointIsInside"));
    struct Params_GetViewpointIsInside {
        UObject* WorldContextObject; // 0x0
        float Indoors; // 0x8
        ERenderSettingsIndoorsType IndoorsType; // 0xc
    }; // Size: 0xd
    Params_GetViewpointIsInside params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Indoors = (float)Indoors;
    params.IndoorsType = (ERenderSettingsIndoorsType)IndoorsType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors = params.Indoors;
}
void ARenderSettingsSingleton::GetViewpointBlendDomain(UObject* WorldContextObject, FBlendDomainState& BlendDomainState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetViewpointBlendDomain"));
    struct Params_GetViewpointBlendDomain {
        UObject* WorldContextObject; // 0x0
        FBlendDomainState BlendDomainState; // 0x8
    }; // Size: 0x100
    Params_GetViewpointBlendDomain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BlendDomainState = params.BlendDomainState;
}
void ARenderSettingsSingleton::CustomBlendDomainHasOverride(UObject* WorldContextObject, FName CustomBlendDomainName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainHasOverride"));
    struct Params_CustomBlendDomainHasOverride {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_CustomBlendDomainHasOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ARenderSettingsSingleton::GetPlayerIsInside(UObject* WorldContextObject, float& Indoors, ERenderSettingsIndoorsType IndoorsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetPlayerIsInside"));
    struct Params_GetPlayerIsInside {
        UObject* WorldContextObject; // 0x0
        float Indoors; // 0x8
        ERenderSettingsIndoorsType IndoorsType; // 0xc
    }; // Size: 0xd
    Params_GetPlayerIsInside params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Indoors = (float)Indoors;
    params.IndoorsType = (ERenderSettingsIndoorsType)IndoorsType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors = params.Indoors;
}
void ARenderSettingsSingleton::GetPlayerBlendDomain(UObject* WorldContextObject, FBlendDomainState& BlendDomainState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetPlayerBlendDomain"));
    struct Params_GetPlayerBlendDomain {
        UObject* WorldContextObject; // 0x0
        FBlendDomainState BlendDomainState; // 0x8
    }; // Size: 0x100
    Params_GetPlayerBlendDomain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BlendDomainState = params.BlendDomainState;
}
float ARenderSettingsSingleton::GetOvercast(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetOvercast"));
    struct Params_GetOvercast {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetOvercast params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARenderSettingsSingleton::GetIndoors(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetIndoors"));
    struct Params_GetIndoors {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetIndoors params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARenderSettingsSingleton::GetDayNight(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetDayNight"));
    struct Params_GetDayNight {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDayNight params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float ARenderSettingsSingleton::CurrentPlayerViewpointOverride(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CurrentPlayerViewpointOverride"));
    struct Params_CurrentPlayerViewpointOverride {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_CurrentPlayerViewpointOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ARenderSettingsSingleton::GetCameraIsInside(UObject* WorldContextObject, float& Indoors, ERenderSettingsIndoorsType IndoorsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetCameraIsInside"));
    struct Params_GetCameraIsInside {
        UObject* WorldContextObject; // 0x0
        float Indoors; // 0x8
        ERenderSettingsIndoorsType IndoorsType; // 0xc
    }; // Size: 0xd
    Params_GetCameraIsInside params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Indoors = (float)Indoors;
    params.IndoorsType = (ERenderSettingsIndoorsType)IndoorsType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors = params.Indoors;
}
void ARenderSettingsSingleton::GetCameraBlendDomain(UObject* WorldContextObject, FBlendDomainState& BlendDomainState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetCameraBlendDomain"));
    struct Params_GetCameraBlendDomain {
        UObject* WorldContextObject; // 0x0
        FBlendDomainState BlendDomainState; // 0x8
    }; // Size: 0x100
    Params_GetCameraBlendDomain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BlendDomainState = params.BlendDomainState;
}
void ARenderSettingsSingleton::GetBlendDomainValue(FBlendDomainState& BlendDomainState, FName BlendDomain, float& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetBlendDomainValue"));
    struct Params_GetBlendDomainValue {
        FBlendDomainState BlendDomainState; // 0x0
        FName BlendDomain; // 0xf8
        float Value; // 0x100
    }; // Size: 0x104
    Params_GetBlendDomainValue params{};
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    params.BlendDomain = (FName)BlendDomain;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BlendDomainState = params.BlendDomainState;
    Value = params.Value;
}
void ARenderSettingsSingleton::GetBlendDomainIndoors(FBlendDomainState& BlendDomainState, float& Indoors, ERenderSettingsIndoorsType IndoorsType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetBlendDomainIndoors"));
    struct Params_GetBlendDomainIndoors {
        FBlendDomainState BlendDomainState; // 0x0
        float Indoors; // 0xf8
        ERenderSettingsIndoorsType IndoorsType; // 0xfc
    }; // Size: 0xfd
    Params_GetBlendDomainIndoors params{};
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    params.Indoors = (float)Indoors;
    params.IndoorsType = (ERenderSettingsIndoorsType)IndoorsType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors = params.Indoors;
    BlendDomainState = params.BlendDomainState;
}
UDirectionalLightComponent* ARenderSettingsSingleton::GetBestDirectionalLight(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.GetBestDirectionalLight"));
    struct Params_GetBestDirectionalLight {
        UObject* WorldContextObject; // 0x0
        UDirectionalLightComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBestDirectionalLight params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDirectionalLightComponent*)params.ReturnValue;
}
void ARenderSettingsSingleton::ComputeBlendDomain(UObject* WorldContextObject, FVector Position, FBlendDomainState& BlendDomainState, bool bHighQuality) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.ComputeBlendDomain"));
    struct Params_ComputeBlendDomain {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        char pad_14[0x4];
        FBlendDomainState BlendDomainState; // 0x18
        bool bHighQuality; // 0x110
    }; // Size: 0x111
    Params_ComputeBlendDomain params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.BlendDomainState = (FBlendDomainState)BlendDomainState;
    params.bHighQuality = (bool)bHighQuality;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BlendDomainState = params.BlendDomainState;
}
void ARenderSettingsSingleton::CustomBlendDomainSetOverride(UObject* WorldContextObject, FName CustomBlendDomainName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainSetOverride"));
    struct Params_CustomBlendDomainSetOverride {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
        float Value; // 0x10
    }; // Size: 0x14
    Params_CustomBlendDomainSetOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ARenderSettingsSingleton::CustomBlendDomainGetBool(UObject* WorldContextObject, FName CustomBlendDomainName, bool& bValue, bool bDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainGetBool"));
    struct Params_CustomBlendDomainGetBool {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
        bool bValue; // 0x10
        bool bDefaultValue; // 0x11
    }; // Size: 0x12
    Params_CustomBlendDomainGetBool params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    params.bValue = (bool)bValue;
    params.bDefaultValue = (bool)bDefaultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bValue = params.bValue;
}
void ARenderSettingsSingleton::CustomBlendDomainGet(UObject* WorldContextObject, FName CustomBlendDomainName, float& Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainGet"));
    struct Params_CustomBlendDomainGet {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
        float Value; // 0x10
        bool bExists; // 0x14
    }; // Size: 0x15
    Params_CustomBlendDomainGet params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    params.Value = (float)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
    Value = params.Value;
}
void ARenderSettingsSingleton::CustomBlendDomainExists(UObject* WorldContextObject, FName CustomBlendDomainName, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainExists"));
    struct Params_CustomBlendDomainExists {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
        bool bExists; // 0x10
    }; // Size: 0x11
    Params_CustomBlendDomainExists params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bExists = params.bExists;
}
void ARenderSettingsSingleton::CustomBlendDomainClearOverride(UObject* WorldContextObject, FName CustomBlendDomainName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.CustomBlendDomainClearOverride"));
    struct Params_CustomBlendDomainClearOverride {
        UObject* WorldContextObject; // 0x0
        FName CustomBlendDomainName; // 0x8
    }; // Size: 0x10
    Params_CustomBlendDomainClearOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CustomBlendDomainName = (FName)CustomBlendDomainName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ARenderSettingsSingleton::ComputeIsInside(UObject* WorldContextObject, FVector Position, float& Indoors, ERenderSettingsIndoorsType IndoorsType, bool bHighQuality) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RenderSettings.RenderSettingsSingleton.ComputeIsInside"));
    struct Params_ComputeIsInside {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        float Indoors; // 0x14
        ERenderSettingsIndoorsType IndoorsType; // 0x18
        bool bHighQuality; // 0x19
    }; // Size: 0x1a
    Params_ComputeIsInside params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.Indoors = (float)Indoors;
    params.IndoorsType = (ERenderSettingsIndoorsType)IndoorsType;
    params.bHighQuality = (bool)bHighQuality;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indoors = params.Indoors;
}
