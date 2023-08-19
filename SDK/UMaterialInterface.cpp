#include "EMaterialParameterAssociation.hpp"
#include "FLightmassMaterialInterfaceSettings.hpp"
#include "FMaterialParameterInfo.hpp"
#include "FMaterialTextureInfo.hpp"
#include "UAssetUserData.hpp"
#include "UFunction.hpp"
#include "UMaterial.hpp"
#include "UMaterialFunctionInterface.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPhysicalMaterialMask.hpp"
#include "USubsurfaceProfile.hpp"
FMaterialParameterInfo UMaterialInterface::GetParameterInfo(EMaterialParameterAssociation Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInterface.GetParameterInfo"));
    struct Params_GetParameterInfo {
        EMaterialParameterAssociation Association; // 0x0
        char pad_1[0x3];
        FName ParameterName; // 0x4
        char pad_c[0x4];
        UMaterialFunctionInterface* LayerFunction; // 0x10
        FMaterialParameterInfo ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetParameterInfo params{};
    params.Association = (EMaterialParameterAssociation)Association;
    params.ParameterName = (FName)ParameterName;
    params.LayerFunction = (UMaterialFunctionInterface*)LayerFunction;
    ProcessEvent(func, &params);
    return (FMaterialParameterInfo)params.ReturnValue;
}
UMaterialInterface* UMaterialInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MaterialInterface");
    return (UMaterialInterface*)res;
}
UPhysicalMaterialMask* UMaterialInterface::GetPhysicalMaterialMask() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInterface.GetPhysicalMaterialMask"));
    struct Params_GetPhysicalMaterialMask {
        UPhysicalMaterialMask* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhysicalMaterialMask params{};
    ProcessEvent(func, &params);
    return (UPhysicalMaterialMask*)params.ReturnValue;
}
void UMaterialInterface::SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInterface.SetForceMipLevelsToBeResident"));
    struct Params_SetForceMipLevelsToBeResident {
        bool OverrideForceMiplevelsToBeResident; // 0x0
        bool bForceMiplevelsToBeResidentValue; // 0x1
        char pad_2[0x2];
        float ForceDuration; // 0x4
        int32_t CinematicTextureGroups; // 0x8
        bool bFastResponse; // 0xc
    }; // Size: 0xd
    Params_SetForceMipLevelsToBeResident params{};
    params.OverrideForceMiplevelsToBeResident = (bool)OverrideForceMiplevelsToBeResident;
    params.bForceMiplevelsToBeResidentValue = (bool)bForceMiplevelsToBeResidentValue;
    params.ForceDuration = (float)ForceDuration;
    params.CinematicTextureGroups = (int32_t)CinematicTextureGroups;
    params.bFastResponse = (bool)bFastResponse;
    ProcessEvent(func, &params);
}
UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterialFromMap(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInterface.GetPhysicalMaterialFromMap"));
    struct Params_GetPhysicalMaterialFromMap {
        int32_t Index; // 0x0
        char pad_4[0x4];
        UPhysicalMaterial* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetPhysicalMaterialFromMap params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (UPhysicalMaterial*)params.ReturnValue;
}
UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInterface.GetPhysicalMaterial"));
    struct Params_GetPhysicalMaterial {
        UPhysicalMaterial* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPhysicalMaterial params{};
    ProcessEvent(func, &params);
    return (UPhysicalMaterial*)params.ReturnValue;
}
UMaterial* UMaterialInterface::GetBaseMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MaterialInterface.GetBaseMaterial"));
    struct Params_GetBaseMaterial {
        UMaterial* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBaseMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterial*)params.ReturnValue;
}
