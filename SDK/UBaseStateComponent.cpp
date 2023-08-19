#include "AActor.hpp"
#include "EMarkupType.hpp"
#include "FDynamicNavComponentInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMaterialPropertyOverrideData.hpp"
#include "FRepairData.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UActorComponent.hpp"
#include "UBaseStateComponent.hpp"
#include "UFunction.hpp"
#include "UGeometryCollection.hpp"
#include "UMaterialPropertyData.hpp"
#include "UStaticMesh.hpp"
UBaseStateComponent* UBaseStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BaseStateComponent");
    return (UBaseStateComponent*)res;
}
void UBaseStateComponent::SetRepairBaseMesh(UStaticMesh* Mesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BaseStateComponent.SetRepairBaseMesh"));
    struct Params_SetRepairBaseMesh {
        UStaticMesh* Mesh; // 0x0
    }; // Size: 0x8
    Params_SetRepairBaseMesh params{};
    params.Mesh = (UStaticMesh*)Mesh;
    ProcessEvent(func, &params);
}
void UBaseStateComponent::SetDestructibleGeometryCollection(UGeometryCollection* GeometryCollection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BaseStateComponent.SetDestructibleGeometryCollection"));
    struct Params_SetDestructibleGeometryCollection {
        UGeometryCollection* GeometryCollection; // 0x0
    }; // Size: 0x8
    Params_SetDestructibleGeometryCollection params{};
    params.GeometryCollection = (UGeometryCollection*)GeometryCollection;
    ProcessEvent(func, &params);
}
UStaticMesh* UBaseStateComponent::GetRepairBaseMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BaseStateComponent.GetRepairBaseMesh"));
    struct Params_GetRepairBaseMesh {
        UStaticMesh* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRepairBaseMesh params{};
    ProcessEvent(func, &params);
    return (UStaticMesh*)params.ReturnValue;
}
void UBaseStateComponent::AddMarkup(EMarkupType i_Markup, float i_Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BaseStateComponent.AddMarkup"));
    struct Params_AddMarkup {
        EMarkupType i_Markup; // 0x0
        char pad_1[0x3];
        float i_Value; // 0x4
    }; // Size: 0x8
    Params_AddMarkup params{};
    params.i_Markup = (EMarkupType)i_Markup;
    params.i_Value = (float)i_Value;
    ProcessEvent(func, &params);
}
