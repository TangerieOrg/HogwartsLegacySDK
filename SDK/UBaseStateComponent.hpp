#pragma once
#include <cstdint>
#include "EMarkupType.hpp"
#include "FDynamicNavComponentInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FMaterialPropertyOverrideData.hpp"
#include "FRepairData.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UActorComponent.hpp"
class UMaterialPropertyData;
class UGeometryCollection;
class AActor;
class UStaticMesh;
#pragma pack(push, 1)
class UBaseStateComponent : public UActorComponent {
public:
    UMaterialPropertyData* MaterialPropertyData; // 0xc8
    bool bOverrideMaterialProperties; // 0xd0
    char pad_d1[0x7];
    FMaterialPropertyOverrideData MaterialPropertyOverrideData; // 0xd8
    FRepairData RepairData; // 0x188
    AActor* OverrideRepairLocation; // 0x3c0
    char pad_3c8[0x50];
    FGameplayTagContainer ImmunityTagContainer; // 0x418
    FGameplayTagContainer ImmuneUnlessCriticalTagContainer; // 0x438
    bool bImmuneToEverythingExcept; // 0x458
    char pad_459[0x7];
    FGameplayTagContainer ImmuneToEverythingExceptTagContainer; // 0x460
    FSpawnSelectInfo m_DbIdInfo; // 0x480
    char pad_500[0x80];
    TArray<FDynamicNavComponentInfo> DynamicNavigationComponentNames; // 0x580
    char pad_590[0x10];
    static UBaseStateComponent* StaticClass();
    void SetRepairBaseMesh(UStaticMesh* Mesh);
    void SetDestructibleGeometryCollection(UGeometryCollection* GeometryCollection);
    UStaticMesh* GetRepairBaseMesh();
    void AddMarkup(EMarkupType i_Markup, float i_Value);
}; // Size: 0x5a0
#pragma pack(pop)
