#pragma once
#include <cstdint>
#include "ALODProxyContainer.hpp"
#include "E_ProxyVaultType\Type.hpp"
#include "FMeshOffset.hpp"
#include "FVector.hpp"
class USceneComponent;
class UStaticMeshComponent;
class USeasonSelectorComponent;
#pragma pack(push, 1)
class ABP_ProxyContainerActor_C : public ALODProxyContainer {
public:
    USceneComponent* DefaultSceneRoot; // 0x2b0
    E_ProxyVaultType::Type VaultType; // 0x2b8
    char pad_2b9[0x3];
    FVector LandscapeMeshLocation; // 0x2bc
    static ABP_ProxyContainerActor_C* StaticClass();
    void GetLocation(int32_t Index, FVector& Output_Position, float& Output_Yaw, bool CallFunc_Array_IsValidIndex_ReturnValue, FMeshOffset CallFunc_Array_Get_Item);
    void CheckSeasonMaterialsValid(bool& AllValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
    void UserConstructionScript(UStaticMeshComponent* StaticMeshComponent, USeasonSelectorComponent* SeasonSelectorComponent);
}; // Size: 0x2c8
#pragma pack(pop)
