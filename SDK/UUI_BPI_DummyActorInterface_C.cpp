#include "EAvatarPresetType.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_DummyActorInterface_C.hpp"
UUI_BPI_DummyActorInterface_C* UUI_BPI_DummyActorInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Actor/UI_BPI_DummyActorInterface.UI_BPI_DummyActorInterface_C");
    return (UUI_BPI_DummyActorInterface_C*)res;
}
void UUI_BPI_DummyActorInterface_C::I_EquipDummyGear(FString GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BPI_DummyActorInterface.UI_BPI_DummyActorInterface_C.I_EquipDummyGear"));
    struct Params_I_EquipDummyGear {
        FString GearID; // 0x0
    }; // Size: 0x10
    Params_I_EquipDummyGear params{};
    params.GearID = (FString)GearID;
    ProcessEvent(func, &params);
}
void UUI_BPI_DummyActorInterface_C::I_SyncDummy(FName CharID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BPI_DummyActorInterface.UI_BPI_DummyActorInterface_C.I_SyncDummy"));
    struct Params_I_SyncDummy {
        FName CharID; // 0x0
    }; // Size: 0x8
    Params_I_SyncDummy params{};
    params.CharID = (FName)CharID;
    ProcessEvent(func, &params);
}
void UUI_BPI_DummyActorInterface_C::I_SetDummyPreset(EAvatarPresetType PresetType, FName PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BPI_DummyActorInterface.UI_BPI_DummyActorInterface_C.I_SetDummyPreset"));
    struct Params_I_SetDummyPreset {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x3];
        FName PresetName; // 0x4
    }; // Size: 0xc
    Params_I_SetDummyPreset params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    params.PresetName = (FName)PresetName;
    ProcessEvent(func, &params);
}
void UUI_BPI_DummyActorInterface_C::I_SetDummyFullbody(FName PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BPI_DummyActorInterface.UI_BPI_DummyActorInterface_C.I_SetDummyFullbody"));
    struct Params_I_SetDummyFullbody {
        FName PresetName; // 0x0
    }; // Size: 0x8
    Params_I_SetDummyFullbody params{};
    params.PresetName = (FName)PresetName;
    ProcessEvent(func, &params);
}
