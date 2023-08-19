#include "ABP_Sanc_PaintingCanvasMedium_04A_C.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UConjurationSnappingWallComponent.hpp"
#include "UConjurationSurfaceShapeComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Sanc_PaintingCanvasMedium_04A_C* ABP_Sanc_PaintingCanvasMedium_04A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_PaintingCanvasMedium_04A.BP_Sanc_PaintingCanvasMedium_04A_C");
    return (ABP_Sanc_PaintingCanvasMedium_04A_C*)res;
}
void ABP_Sanc_PaintingCanvasMedium_04A_C::ObjectConjured() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_PaintingCanvasMedium_04A.BP_Sanc_PaintingCanvasMedium_04A_C.ObjectConjured"));
    struct Params_ObjectConjured {
    }; // Size: 0x0
    Params_ObjectConjured params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_PaintingCanvasMedium_04A_C::ExecuteUbergraph_BP_Sanc_PaintingCanvasMedium_04A(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_Sanc_PaintingCanvasMedium_04A_C::ObjectTransformationCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_PaintingCanvasMedium_04A.BP_Sanc_PaintingCanvasMedium_04A_C.ObjectTransformationCancelled"));
    struct Params_ObjectTransformationCancelled {
    }; // Size: 0x0
    Params_ObjectTransformationCancelled params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_PaintingCanvasMedium_04A_C::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_PaintingCanvasMedium_04A.BP_Sanc_PaintingCanvasMedium_04A_C.ObjectPhysicalResponseImpact"));
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
void ABP_Sanc_PaintingCanvasMedium_04A_C::ObjectVanished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_PaintingCanvasMedium_04A.BP_Sanc_PaintingCanvasMedium_04A_C.ObjectVanished"));
    struct Params_ObjectVanished {
    }; // Size: 0x0
    Params_ObjectVanished params{};
    ProcessEvent(func, &params);
}
void ABP_Sanc_PaintingCanvasMedium_04A_C::ObjectTransformationConfirmed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Sanctuary/Blueprints/Props/BP_Sanc_PaintingCanvasMedium_04A.BP_Sanc_PaintingCanvasMedium_04A_C.ObjectTransformationConfirmed"));
    struct Params_ObjectTransformationConfirmed {
    }; // Size: 0x0
    Params_ObjectTransformationConfirmed params{};
    ProcessEvent(func, &params);
}
