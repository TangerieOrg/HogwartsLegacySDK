#pragma once
#include <cstdint>
#include "FLightGroupSettingsOptional.hpp"
#include "FLightGroupWindowMaterialsResources.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UGlobalLightGroupsWindowMaterialsComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    FLightGroupSettingsOptional Settings; // 0xd0
    FName WindowGroupMaterialParameter; // 0xe4
    char pad_ec[0x4];
    FLightGroupWindowMaterialsResources Resources; // 0xf0
    char pad_100[0x8];
    static UGlobalLightGroupsWindowMaterialsComponent* StaticClass();
    void RefreshBuildResults();
}; // Size: 0x108
#pragma pack(pop)
