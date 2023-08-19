#include "ABP_Sanc_FrolicsomeFelinePlates_C.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBoxComponent.hpp"
#include "UConjurationSnappingWallComponent.hpp"
#include "UConjurationSurfaceShapeComponent.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_Sanc_FrolicsomeFelinePlates_C::ObjectConjured() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C.ObjectConjured"));
    struct Params_ObjectConjured {
    }; // Size: 0x0
    Params_ObjectConjured params{};
    ProcessEvent(func, &params);
}
ABP_Sanc_FrolicsomeFelinePlates_C* ABP_Sanc_FrolicsomeFelinePlates_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C");
    return (ABP_Sanc_FrolicsomeFelinePlates_C*)res;
}
void ABP_Sanc_FrolicsomeFelinePlates_C::ObjectTransformationCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C.ObjectTransformationCancelled"));
    struct Params_ObjectTransformationCancelled {
    }; // Size: 0x0
    Params_ObjectTransformationCancelled params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FrolicsomeFelinePlates_C::ObjectVanished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C.ObjectVanished"));
    struct Params_ObjectVanished {
    }; // Size: 0x0
    Params_ObjectVanished params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FrolicsomeFelinePlates_C::ObjectTransformationConfirmed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C.ObjectTransformationConfirmed"));
    struct Params_ObjectTransformationConfirmed {
    }; // Size: 0x0
    Params_ObjectTransformationConfirmed params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FrolicsomeFelinePlates_C::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C.ObjectPhysicalResponseImpact"));
    struct Params_ObjectPhysicalResponseImpact {
        float ImpactIntensity; // 0x0
        FName SpellName; // 0x4
        FName ResponseConfigName; // 0xc
        FVector ImpactLocation; // 0x14
    }; // Size: 0x20
    Params_ObjectPhysicalResponseImpact params{};
    params.ImpactIntensity = (float)ImpactIntensity;
    params.SpellName = (FName)SpellName;
    params.ResponseConfigName = (FName)ResponseConfigName;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
void ABP_Sanc_FrolicsomeFelinePlates_C::ObjectTransformationStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_FrolicsomeFelinePlates.BP_Sanc_FrolicsomeFelinePlates_C.ObjectTransformationStarted"));
    struct Params_ObjectTransformationStarted {
    }; // Size: 0x0
    Params_ObjectTransformationStarted params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_FrolicsomeFelinePlates_C::ExecuteUbergraph_BP_Sanc_FrolicsomeFelinePlates(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
