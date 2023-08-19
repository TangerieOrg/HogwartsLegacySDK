#include "AActor.hpp"
#include "ESeasonEnum.hpp"
#include "EWeatherSurfaceStormType.hpp"
#include "FBlendDomain.hpp"
#include "FWeatherActionContext.hpp"
#include "FWeatherDefinitionName.hpp"
#include "FWeatherEnvironmentalGlobalsExtras.hpp"
#include "FWeatherOverrideStack.hpp"
#include "FWeatherOverrideStackEntry.hpp"
#include "FWeatherSequenceOrigin.hpp"
#include "FWindParametersInstant.hpp"
#include "FWorldWeatherDecalTrackers.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableWeatherClouds.hpp"
#include "UGlobalLightingBlendableWeatherFog.hpp"
#include "ULiveWeatherSequenceInfo.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UWeatherMasterComponent.hpp"
#include "UWeatherSequencePendingLoad.hpp"
#include "UWeatherStorm.hpp"
#include "UWorldWeatherDecalDefinitions.hpp"
void UWeatherMasterComponent::WeatherFXIsInExtraSwaps(AActor* Actor, bool& bIsInList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.WeatherFXIsInExtraSwaps"));
    struct Params_WeatherFXIsInExtraSwaps {
        AActor* Actor; // 0x0
        bool bIsInList; // 0x8
    }; // Size: 0x9
    Params_WeatherFXIsInExtraSwaps params{};
    params.Actor = (AActor*)Actor;
    params.bIsInList = (bool)bIsInList;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsInList = params.bIsInList;
}
UWeatherMasterComponent* UWeatherMasterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherMasterComponent");
    return (UWeatherMasterComponent*)res;
}
void UWeatherMasterComponent::WeatherFXRemoveFromExtraSwaps(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.WeatherFXRemoveFromExtraSwaps"));
    struct Params_WeatherFXRemoveFromExtraSwaps {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_WeatherFXRemoveFromExtraSwaps params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWeatherMasterComponent::WeatherFXAddToExtraSwaps(AActor* Actor, float OverrideSwapDistanceMeters, bool bAlwaysSwap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.WeatherFXAddToExtraSwaps"));
    struct Params_WeatherFXAddToExtraSwaps {
        AActor* Actor; // 0x0
        float OverrideSwapDistanceMeters; // 0x8
        bool bAlwaysSwap; // 0xc
    }; // Size: 0xd
    Params_WeatherFXAddToExtraSwaps params{};
    params.Actor = (AActor*)Actor;
    params.OverrideSwapDistanceMeters = (float)OverrideSwapDistanceMeters;
    params.bAlwaysSwap = (bool)bAlwaysSwap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWeatherMasterComponent::SetDefaultWeather(UObject* WorldContextObject, FName NewDefaultWeather) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.SetDefaultWeather"));
    struct Params_SetDefaultWeather {
        UObject* WorldContextObject; // 0x0
        FName NewDefaultWeather; // 0x8
    }; // Size: 0x10
    Params_SetDefaultWeather params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NewDefaultWeather = (FName)NewDefaultWeather;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWeatherMasterComponent::SetOverrideWeather(UObject* WorldContextObject, FName NewOverrideWeather, bool bInstantChange) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.SetOverrideWeather"));
    struct Params_SetOverrideWeather {
        UObject* WorldContextObject; // 0x0
        FName NewOverrideWeather; // 0x8
        bool bInstantChange; // 0x10
    }; // Size: 0x11
    Params_SetOverrideWeather params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.NewOverrideWeather = (FName)NewOverrideWeather;
    params.bInstantChange = (bool)bInstantChange;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWeatherMasterComponent::PushWeatherOverride(UObject* WorldContextObject, FWeatherOverrideStackEntry& Entry, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.PushWeatherOverride"));
    struct Params_PushWeatherOverride {
        UObject* WorldContextObject; // 0x0
        FWeatherOverrideStackEntry Entry; // 0x8
        bool bSuccess; // 0x30
    }; // Size: 0x31
    Params_PushWeatherOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Entry = (FWeatherOverrideStackEntry)Entry;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Entry = params.Entry;
    bSuccess = params.bSuccess;
}
void UWeatherMasterComponent::PopWeatherOverride(UObject* WorldContextObject, UObject* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.PopWeatherOverride"));
    struct Params_PopWeatherOverride {
        UObject* WorldContextObject; // 0x0
        UObject* Owner; // 0x8
    }; // Size: 0x10
    Params_PopWeatherOverride params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Owner = (UObject*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UWeatherMasterComponent::NextSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.NextSequence"));
    struct Params_NextSequence {
    }; // Size: 0x0
    Params_NextSequence params{};
    ProcessEvent(func, &params);
}
void UWeatherMasterComponent::IsSnowing(UObject* WorldContextObject, bool& bIsSnowStorm, EWeatherSurfaceStormType& SnowStormType, float& SnowIntensity, float& SnowCoverage, bool bMaskWithIndoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.IsSnowing"));
    struct Params_IsSnowing {
        UObject* WorldContextObject; // 0x0
        bool bIsSnowStorm; // 0x8
        EWeatherSurfaceStormType SnowStormType; // 0x9
        char pad_a[0x2];
        float SnowIntensity; // 0xc
        float SnowCoverage; // 0x10
        bool bMaskWithIndoors; // 0x14
    }; // Size: 0x15
    Params_IsSnowing params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bIsSnowStorm = (bool)bIsSnowStorm;
    params.SnowStormType = (EWeatherSurfaceStormType)SnowStormType;
    params.SnowIntensity = (float)SnowIntensity;
    params.SnowCoverage = (float)SnowCoverage;
    params.bMaskWithIndoors = (bool)bMaskWithIndoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsSnowStorm = params.bIsSnowStorm;
    SnowStormType = params.SnowStormType;
    SnowIntensity = params.SnowIntensity;
    SnowCoverage = params.SnowCoverage;
}
void UWeatherMasterComponent::IsRaining(UObject* WorldContextObject, bool& bIsRainStorm, EWeatherSurfaceStormType& RainStormType, float& RainIntensity, float& RainCoverage, bool bMaskWithIndoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.IsRaining"));
    struct Params_IsRaining {
        UObject* WorldContextObject; // 0x0
        bool bIsRainStorm; // 0x8
        EWeatherSurfaceStormType RainStormType; // 0x9
        char pad_a[0x2];
        float RainIntensity; // 0xc
        float RainCoverage; // 0x10
        bool bMaskWithIndoors; // 0x14
    }; // Size: 0x15
    Params_IsRaining params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bIsRainStorm = (bool)bIsRainStorm;
    params.RainStormType = (EWeatherSurfaceStormType)RainStormType;
    params.RainIntensity = (float)RainIntensity;
    params.RainCoverage = (float)RainCoverage;
    params.bMaskWithIndoors = (bool)bMaskWithIndoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RainIntensity = params.RainIntensity;
    RainStormType = params.RainStormType;
    bIsRainStorm = params.bIsRainStorm;
    RainCoverage = params.RainCoverage;
}
void UWeatherMasterComponent::GetWeatherWind(UObject* WorldContextObject, FWindParametersInstant& WindParameters, bool& bHaveWeather) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetWeatherWind"));
    struct Params_GetWeatherWind {
        UObject* WorldContextObject; // 0x0
        FWindParametersInstant WindParameters; // 0x8
        bool bHaveWeather; // 0x18
    }; // Size: 0x19
    Params_GetWeatherWind params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WindParameters = (FWindParametersInstant)WindParameters;
    params.bHaveWeather = (bool)bHaveWeather;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindParameters = params.WindParameters;
    bHaveWeather = params.bHaveWeather;
}
void UWeatherMasterComponent::GetWeatherMaster(UObject* WorldContextObject, UWeatherMasterComponent*& WeatherMaster) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetWeatherMaster"));
    struct Params_GetWeatherMaster {
        UObject* WorldContextObject; // 0x0
        UWeatherMasterComponent* WeatherMaster; // 0x8
    }; // Size: 0x10
    Params_GetWeatherMaster params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WeatherMaster = (UWeatherMasterComponent*)WeatherMaster;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WeatherMaster = params.WeatherMaster;
}
void UWeatherMasterComponent::GetWeatherFXRoot(UObject* WorldContextObject, USceneComponent*& FXRootComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetWeatherFXRoot"));
    struct Params_GetWeatherFXRoot {
        UObject* WorldContextObject; // 0x0
        USceneComponent* FXRootComponent; // 0x8
    }; // Size: 0x10
    Params_GetWeatherFXRoot params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.FXRootComponent = (USceneComponent*)FXRootComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXRootComponent = params.FXRootComponent;
}
void UWeatherMasterComponent::GetValidWeatherPresets(UObject* WorldContextObject, TArray<FName>& WeatherPresets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetValidWeatherPresets"));
    struct Params_GetValidWeatherPresets {
        UObject* WorldContextObject; // 0x0
        TArray<FName> WeatherPresets; // 0x8
    }; // Size: 0x18
    Params_GetValidWeatherPresets params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WeatherPresets = (TArray<FName>)WeatherPresets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WeatherPresets = params.WeatherPresets;
}
void UWeatherMasterComponent::GetOverrideWeather(UObject* WorldContextObject, FName& CurrentOverrideWeather) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetOverrideWeather"));
    struct Params_GetOverrideWeather {
        UObject* WorldContextObject; // 0x0
        FName CurrentOverrideWeather; // 0x8
    }; // Size: 0x10
    Params_GetOverrideWeather params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CurrentOverrideWeather = (FName)CurrentOverrideWeather;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CurrentOverrideWeather = params.CurrentOverrideWeather;
}
void UWeatherMasterComponent::GetOvercast(UObject* WorldContextObject, float& Overcast) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetOvercast"));
    struct Params_GetOvercast {
        UObject* WorldContextObject; // 0x0
        float Overcast; // 0x8
    }; // Size: 0xc
    Params_GetOvercast params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Overcast = (float)Overcast;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Overcast = params.Overcast;
}
void UWeatherMasterComponent::GetDefaultWeather(UObject* WorldContextObject, FName& CurrentDefaultWeather) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetDefaultWeather"));
    struct Params_GetDefaultWeather {
        UObject* WorldContextObject; // 0x0
        FName CurrentDefaultWeather; // 0x8
    }; // Size: 0x10
    Params_GetDefaultWeather params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CurrentDefaultWeather = (FName)CurrentDefaultWeather;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CurrentDefaultWeather = params.CurrentDefaultWeather;
}
void UWeatherMasterComponent::GetCurrentWeather(UObject* WorldContextObject, FName& TheCurrentWeather) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherMasterComponent.GetCurrentWeather"));
    struct Params_GetCurrentWeather {
        UObject* WorldContextObject; // 0x0
        FName TheCurrentWeather; // 0x8
    }; // Size: 0x10
    Params_GetCurrentWeather params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TheCurrentWeather = (FName)TheCurrentWeather;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TheCurrentWeather = params.TheCurrentWeather;
}
