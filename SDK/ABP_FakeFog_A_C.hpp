#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLinearColor.hpp"
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class ABP_FakeFog_A_C : public AActor {
public:
    UStaticMeshComponent* SM_Fog; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    UStaticMesh* Sphere; // 0x258
    UStaticMesh* Cone; // 0x260
    bool Use_Cone; // 0x268
    char pad_269[0x7];
    UMaterialInstanceDynamic* Fog_MID; // 0x270
    bool Use_TOD_adjustment; // 0x278
    char pad_279[0x3];
    float Fog_Density_Day_Max; // 0x27c
    float Fog_Density_Day_Min; // 0x280
    float Fog_Density_Night_Min; // 0x284
    float Fog_Density_Night_Max; // 0x288
    float Fade_Distance; // 0x28c
    float Emissive_Multiplier; // 0x290
    float Fresnel; // 0x294
    float Gradiant; // 0x298
    FLinearColor Fog_Color; // 0x29c
    float Depth_Fade; // 0x2ac
    bool Use_Fog_Sheets; // 0x2b0
    char pad_2b1[0x3];
    float T1_Pan_Speed; // 0x2b4
    float T2_Pan_Speed; // 0x2b8
    float T1_Scale; // 0x2bc
    float T2_Scale; // 0x2c0
    float T3_Pan_Speed; // 0x2c4
    float T3_Scale; // 0x2c8
    bool Set_A; // 0x2cc
    bool Set_B; // 0x2cd
    bool Set_C; // 0x2ce
    char pad_2cf[0x1];
    UStaticMesh* Fog_Mesh; // 0x2d0
    UMaterialInterface* Fog_Mat; // 0x2d8
    static ABP_FakeFog_A_C* StaticClass();
    void Construct_Fog(bool Temp_bool_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, UStaticMesh* K2Node_Select_Default);
    void Fog_Sheet_Selection();
    void Texture_Dependent();
    void Base_Fog_Parameters();
    void UserConstructionScript0();
}; // Size: 0x2e0
#pragma pack(pop)
