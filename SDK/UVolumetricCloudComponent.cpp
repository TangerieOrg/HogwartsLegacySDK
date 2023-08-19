#include "FColor.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UVolumetricCloudComponent.hpp"
UVolumetricCloudComponent* UVolumetricCloudComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VolumetricCloudComponent");
    return (UVolumetricCloudComponent*)res;
}
void UVolumetricCloudComponent::SetViewSampleCountScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetViewSampleCountScale"));
    struct Params_SetViewSampleCountScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetViewSampleCountScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetLayerHeight(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetLayerHeight"));
    struct Params_SetLayerHeight {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetLayerHeight params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetStopTracingTransmittanceThreshold(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetStopTracingTransmittanceThreshold"));
    struct Params_SetStopTracingTransmittanceThreshold {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetStopTracingTransmittanceThreshold params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetTracingStartMaxDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetTracingStartMaxDistance"));
    struct Params_SetTracingStartMaxDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetTracingStartMaxDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetTracingMaxDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetTracingMaxDistance"));
    struct Params_SetTracingMaxDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetTracingMaxDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetShadowTracingDistance(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetShadowTracingDistance"));
    struct Params_SetShadowTracingDistance {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowTracingDistance params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetSkyLightCloudBottomOcclusion(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetSkyLightCloudBottomOcclusion"));
    struct Params_SetSkyLightCloudBottomOcclusion {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetSkyLightCloudBottomOcclusion params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetShadowViewSampleCountScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetShadowViewSampleCountScale"));
    struct Params_SetShadowViewSampleCountScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowViewSampleCountScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetShadowReflectionSampleCountScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetShadowReflectionSampleCountScale"));
    struct Params_SetShadowReflectionSampleCountScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetShadowReflectionSampleCountScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetReflectionSampleCountScale(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetReflectionSampleCountScale"));
    struct Params_SetReflectionSampleCountScale {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetReflectionSampleCountScale params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetPlanetRadius(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetPlanetRadius"));
    struct Params_SetPlanetRadius {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetPlanetRadius params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetMaterial(UMaterialInterface* NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetMaterial"));
    struct Params_SetMaterial {
        UMaterialInterface* NewValue; // 0x0
    }; // Size: 0x8
    Params_SetMaterial params{};
    params.NewValue = (UMaterialInterface*)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetLayerBottomAltitude(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetLayerBottomAltitude"));
    struct Params_SetLayerBottomAltitude {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_SetLayerBottomAltitude params{};
    params.NewValue = (float)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetGroundAlbedo(FColor NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetGroundAlbedo"));
    struct Params_SetGroundAlbedo {
        FColor NewValue; // 0x0
    }; // Size: 0x4
    Params_SetGroundAlbedo params{};
    params.NewValue = (FColor)NewValue;
    ProcessEvent(func, &params);
}
void UVolumetricCloudComponent::SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VolumetricCloudComponent.SetbUsePerSampleAtmosphericLightTransmittance"));
    struct Params_SetbUsePerSampleAtmosphericLightTransmittance {
        bool NewValue; // 0x0
    }; // Size: 0x1
    Params_SetbUsePerSampleAtmosphericLightTransmittance params{};
    params.NewValue = (bool)NewValue;
    ProcessEvent(func, &params);
}
