#include "AFlyingBroom.hpp"
#include "AMountZoneVolumeBase.hpp"
#include "APawn.hpp"
#include "AVolume.hpp"
#include "EMountTypes.hpp"
#include "EPrerequisiteType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UCreature_MountComponent.hpp"
#include "UFunction.hpp"
void AMountZoneVolumeBase::EnableZone(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.EnableZone"));
    struct Params_EnableZone {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnableZone params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
AMountZoneVolumeBase* AMountZoneVolumeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MountZoneVolumeBase");
    return (AMountZoneVolumeBase*)res;
}
bool AMountZoneVolumeBase::IsIgnored(EMountTypes InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.IsIgnored"));
    struct Params_IsIgnored {
        EMountTypes InType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsIgnored params{};
    params.InType = (EMountTypes)InType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AMountZoneVolumeBase::GetMountType(APawn* InPawn, EMountTypes& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.GetMountType"));
    struct Params_GetMountType {
        APawn* InPawn; // 0x0
        EMountTypes OutType; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_GetMountType params{};
    params.InPawn = (APawn*)InPawn;
    params.OutType = (EMountTypes)OutType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutType = params.OutType;
    return (bool)params.ReturnValue;
}
AFlyingBroom* AMountZoneVolumeBase::GetBroom(APawn* InPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.GetBroom"));
    struct Params_GetBroom {
        APawn* InPawn; // 0x0
        AFlyingBroom* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBroom params{};
    params.InPawn = (APawn*)InPawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AFlyingBroom*)params.ReturnValue;
}
UCreature_MountComponent* AMountZoneVolumeBase::GetMount(APawn* InPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.GetMount"));
    struct Params_GetMount {
        APawn* InPawn; // 0x0
        UCreature_MountComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMount params{};
    params.InPawn = (APawn*)InPawn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCreature_MountComponent*)params.ReturnValue;
}
bool AMountZoneVolumeBase::GetEquivalentFlyingType(EMountTypes InType, EMountTypes& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.GetEquivalentFlyingType"));
    struct Params_GetEquivalentFlyingType {
        EMountTypes InType; // 0x0
        EMountTypes OutType; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_GetEquivalentFlyingType params{};
    params.InType = (EMountTypes)InType;
    params.OutType = (EMountTypes)OutType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutType = params.OutType;
    return (bool)params.ReturnValue;
}
bool AMountZoneVolumeBase::GetEquivalentGroundType(EMountTypes InType, EMountTypes& OutType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MountZoneVolumeBase.GetEquivalentGroundType"));
    struct Params_GetEquivalentGroundType {
        EMountTypes InType; // 0x0
        EMountTypes OutType; // 0x1
        bool ReturnValue; // 0x2
    }; // Size: 0x3
    Params_GetEquivalentGroundType params{};
    params.InType = (EMountTypes)InType;
    params.OutType = (EMountTypes)OutType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutType = params.OutType;
    return (bool)params.ReturnValue;
}
