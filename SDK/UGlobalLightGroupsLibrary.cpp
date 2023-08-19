#include "AActor.hpp"
#include "AGlobalLightGroupsMaster.hpp"
#include "EGlobalLightGroupsMaskLockState.hpp"
#include "FGlobalLightGroupsGroupName.hpp"
#include "FGlobalLightGroupsMask.hpp"
#include "FGlobalLightGroupsRegionName.hpp"
#include "FGlobalLightGroupsTimeHMSOnOff.hpp"
#include "FGlobalLightGroupsTimeOnOff.hpp"
#include "FGlobalLightGroupsTimeSunOnOff.hpp"
#include "FLightComponentMessage.hpp"
#include "FLightComponentScheduleName.hpp"
#include "FLightGroupBoundComponentSettings.hpp"
#include "FLightGroupMessage.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UGlobalLightGroupsLibrary.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
void UGlobalLightGroupsLibrary::RemoveLightComponentSchedule(UObject* WorldContextObject, USceneComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.RemoveLightComponentSchedule"));
    struct Params_RemoveLightComponentSchedule {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
    }; // Size: 0x10
    Params_RemoveLightComponentSchedule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::ValidLightGroup(UObject* WorldContextObject, FName Region, FName Group, bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.ValidLightGroup"));
    struct Params_ValidLightGroup {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        bool bValid; // 0x18
    }; // Size: 0x19
    Params_ValidLightGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.bValid = (bool)bValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bValid = params.bValid;
}
void UGlobalLightGroupsLibrary::ValidateMyRegion(UObject* WorldContextObject, FName Region, FName& ValidRegion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.ValidateMyRegion"));
    struct Params_ValidateMyRegion {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName ValidRegion; // 0x10
    }; // Size: 0x18
    Params_ValidateMyRegion params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.ValidRegion = (FName)ValidRegion;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ValidRegion = params.ValidRegion;
}
UGlobalLightGroupsLibrary* UGlobalLightGroupsLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightGroups.GlobalLightGroupsLibrary");
    return (UGlobalLightGroupsLibrary*)res;
}
void UGlobalLightGroupsLibrary::LightComponentSetSchedule(UObject* WorldContextObject, USceneComponent* Light, FName ScheduleName, bool& bSuccess, bool bToggleChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentSetSchedule"));
    struct Params_LightComponentSetSchedule {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        FName ScheduleName; // 0x10
        bool bSuccess; // 0x18
        bool bToggleChildren; // 0x19
    }; // Size: 0x1a
    Params_LightComponentSetSchedule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.ScheduleName = (FName)ScheduleName;
    params.bSuccess = (bool)bSuccess;
    params.bToggleChildren = (bool)bToggleChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UGlobalLightGroupsLibrary::UnbindComponentVisibility(UObject* WorldContextObject, FName Region, FName Group, USceneComponent* SceneComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.UnbindComponentVisibility"));
    struct Params_UnbindComponentVisibility {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        USceneComponent* SceneComponent; // 0x18
    }; // Size: 0x20
    Params_UnbindComponentVisibility params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.SceneComponent = (USceneComponent*)SceneComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::TurnOffLightGroup(UObject* WorldContextObject, FName Region, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.TurnOffLightGroup"));
    struct Params_TurnOffLightGroup {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
    }; // Size: 0x18
    Params_TurnOffLightGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::UnbindComponentsVisibility(UObject* WorldContextObject, FName Region, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.UnbindComponentsVisibility"));
    struct Params_UnbindComponentsVisibility {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
    }; // Size: 0x18
    Params_UnbindComponentsVisibility params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::TurnOffLightGroups(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.TurnOffLightGroups"));
    struct Params_TurnOffLightGroups {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FGlobalLightGroupsMask GroupMask; // 0x10
    }; // Size: 0x18
    Params_TurnOffLightGroups params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.GroupMask = (FGlobalLightGroupsMask)GroupMask;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::LightComponentMessageDelegate__DelegateSignature(UObject* Caller, FLightComponentMessage& Message) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentMessageDelegate__DelegateSignature"));
    struct Params_LightComponentMessageDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FLightComponentMessage Message; // 0x8
    }; // Size: 0x20
    Params_LightComponentMessageDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Message = (FLightComponentMessage)Message;
    ProcessEvent(func, &params);
    Message = params.Message;
}
void UGlobalLightGroupsLibrary::TurnOnLightGroups(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.TurnOnLightGroups"));
    struct Params_TurnOnLightGroups {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FGlobalLightGroupsMask GroupMask; // 0x10
    }; // Size: 0x18
    Params_TurnOnLightGroups params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.GroupMask = (FGlobalLightGroupsMask)GroupMask;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::TurnOnLightGroup(UObject* WorldContextObject, FName Region, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.TurnOnLightGroup"));
    struct Params_TurnOnLightGroup {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
    }; // Size: 0x18
    Params_TurnOnLightGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::GetLightGroupLock(UObject* WorldContextObject, FName Region, FName Group, EGlobalLightGroupsMaskLockState& State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.GetLightGroupLock"));
    struct Params_GetLightGroupLock {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        EGlobalLightGroupsMaskLockState State; // 0x18
    }; // Size: 0x19
    Params_GetLightGroupLock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.State = (EGlobalLightGroupsMaskLockState)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    State = params.State;
}
void UGlobalLightGroupsLibrary::TestLightRegionAndGroup(FName RegionA, FName GroupA, FName RegionB, FName GroupB, bool& bMatch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.TestLightRegionAndGroup"));
    struct Params_TestLightRegionAndGroup {
        FName RegionA; // 0x0
        FName GroupA; // 0x8
        FName RegionB; // 0x10
        FName GroupB; // 0x18
        bool bMatch; // 0x20
    }; // Size: 0x21
    Params_TestLightRegionAndGroup params{};
    params.RegionA = (FName)RegionA;
    params.GroupA = (FName)GroupA;
    params.RegionB = (FName)RegionB;
    params.GroupB = (FName)GroupB;
    params.bMatch = (bool)bMatch;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bMatch = params.bMatch;
}
void UGlobalLightGroupsLibrary::SetLightGroupLocks(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask, EGlobalLightGroupsMaskLockState State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.SetLightGroupLocks"));
    struct Params_SetLightGroupLocks {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FGlobalLightGroupsMask GroupMask; // 0x10
        EGlobalLightGroupsMaskLockState State; // 0x18
    }; // Size: 0x19
    Params_SetLightGroupLocks params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.GroupMask = (FGlobalLightGroupsMask)GroupMask;
    params.State = (EGlobalLightGroupsMaskLockState)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::SetLightGroupLock(UObject* WorldContextObject, FName Region, FName Group, EGlobalLightGroupsMaskLockState State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.SetLightGroupLock"));
    struct Params_SetLightGroupLock {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        EGlobalLightGroupsMaskLockState State; // 0x18
    }; // Size: 0x19
    Params_SetLightGroupLock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.State = (EGlobalLightGroupsMaskLockState)State;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::IsLightComponentScheduleEnabled(UObject* WorldContextObject, USceneComponent* Light, bool& bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.IsLightComponentScheduleEnabled"));
    struct Params_IsLightComponentScheduleEnabled {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        bool bEnabled; // 0x10
    }; // Size: 0x11
    Params_IsLightComponentScheduleEnabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bEnabled = params.bEnabled;
}
FGlobalLightGroupsMask UGlobalLightGroupsLibrary::NamesLightGroupsMask(UObject* WorldContextObject, FName Region, TArray<FName>& Groups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.NamesLightGroupsMask"));
    struct Params_NamesLightGroupsMask {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        TArray<FName> Groups; // 0x10
        FGlobalLightGroupsMask ReturnValue; // 0x20
    }; // Size: 0x28
    Params_NamesLightGroupsMask params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Groups = (TArray<FName>)Groups;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Groups = params.Groups;
    return (FGlobalLightGroupsMask)params.ReturnValue;
}
FGlobalLightGroupsMask UGlobalLightGroupsLibrary::NameLightGroupsMask(UObject* WorldContextObject, FName Region, FName& Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.NameLightGroupsMask"));
    struct Params_NameLightGroupsMask {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        FGlobalLightGroupsMask ReturnValue; // 0x18
    }; // Size: 0x20
    Params_NameLightGroupsMask params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Group = params.Group;
    return (FGlobalLightGroupsMask)params.ReturnValue;
}
FGlobalLightGroupsTimeOnOff UGlobalLightGroupsLibrary::MakeTimeOnOffSun(FGlobalLightGroupsTimeSunOnOff& SunOnOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.MakeTimeOnOffSun"));
    struct Params_MakeTimeOnOffSun {
        FGlobalLightGroupsTimeSunOnOff SunOnOff; // 0x0
        FGlobalLightGroupsTimeOnOff ReturnValue; // 0x20
    }; // Size: 0x70
    Params_MakeTimeOnOffSun params{};
    params.SunOnOff = (FGlobalLightGroupsTimeSunOnOff)SunOnOff;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SunOnOff = params.SunOnOff;
    return (FGlobalLightGroupsTimeOnOff)params.ReturnValue;
}
void UGlobalLightGroupsLibrary::ClearAllLightGroupLocks(UObject* WorldContextObject, FName Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.ClearAllLightGroupLocks"));
    struct Params_ClearAllLightGroupLocks {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
    }; // Size: 0x10
    Params_ClearAllLightGroupLocks params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UGlobalLightGroupsLibrary::Conv_RegionDropDownToRegionName(FGlobalLightGroupsRegionName RegionDropdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.Conv_RegionDropDownToRegionName"));
    struct Params_Conv_RegionDropDownToRegionName {
        FGlobalLightGroupsRegionName RegionDropdown; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_RegionDropDownToRegionName params{};
    params.RegionDropdown = (FGlobalLightGroupsRegionName)RegionDropdown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FGlobalLightGroupsTimeOnOff UGlobalLightGroupsLibrary::MakeTimeOnOffHMS(FGlobalLightGroupsTimeHMSOnOff& TimeOnOff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.MakeTimeOnOffHMS"));
    struct Params_MakeTimeOnOffHMS {
        FGlobalLightGroupsTimeHMSOnOff TimeOnOff; // 0x0
        FGlobalLightGroupsTimeOnOff ReturnValue; // 0x2c
    }; // Size: 0x7c
    Params_MakeTimeOnOffHMS params{};
    params.TimeOnOff = (FGlobalLightGroupsTimeHMSOnOff)TimeOnOff;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TimeOnOff = params.TimeOnOff;
    return (FGlobalLightGroupsTimeOnOff)params.ReturnValue;
}
void UGlobalLightGroupsLibrary::CheckLightGroup(UObject* WorldContextObject, FName Region, FName Group, bool& bIsOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.CheckLightGroup"));
    struct Params_CheckLightGroup {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        bool bIsOn; // 0x18
    }; // Size: 0x19
    Params_CheckLightGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.bIsOn = (bool)bIsOn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsOn = params.bIsOn;
}
void UGlobalLightGroupsLibrary::LockAllLightGroups(UObject* WorldContextObject, FName Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LockAllLightGroups"));
    struct Params_LockAllLightGroups {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
    }; // Size: 0x10
    Params_LockAllLightGroups params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::HermesBindLightComponentMessage() {}
void UGlobalLightGroupsLibrary::LightGroupMessageDelegate__DelegateSignature(UObject* Caller, FLightGroupMessage& Message) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupMessageDelegate__DelegateSignature"));
    struct Params_LightGroupMessageDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FLightGroupMessage Message; // 0x8
    }; // Size: 0x1c
    Params_LightGroupMessageDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.Message = (FLightGroupMessage)Message;
    ProcessEvent(func, &params);
    Message = params.Message;
}
void UGlobalLightGroupsLibrary::LightGroupGetHermesEvent(UObject* WorldContextObject, FName Region, FName Group, FName& HermesEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupGetHermesEvent"));
    struct Params_LightGroupGetHermesEvent {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        FName HermesEvent; // 0x18
    }; // Size: 0x20
    Params_LightGroupGetHermesEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.HermesEvent = (FName)HermesEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HermesEvent = params.HermesEvent;
}
void UGlobalLightGroupsLibrary::LightGroupEnableHermesEvent(UObject* WorldContextObject, FName Region, FName Group, FName HermesEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupEnableHermesEvent"));
    struct Params_LightGroupEnableHermesEvent {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        FName HermesEvent; // 0x18
    }; // Size: 0x20
    Params_LightGroupEnableHermesEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.HermesEvent = (FName)HermesEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::LightGroupDisableHermesEvent(UObject* WorldContextObject, FName Region, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightGroupDisableHermesEvent"));
    struct Params_LightGroupDisableHermesEvent {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
    }; // Size: 0x18
    Params_LightGroupDisableHermesEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::LightComponentScheduleToggleChildren(UObject* WorldContextObject, USceneComponent* Light, bool bToggleChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentScheduleToggleChildren"));
    struct Params_LightComponentScheduleToggleChildren {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        bool bToggleChildren; // 0x10
    }; // Size: 0x11
    Params_LightComponentScheduleToggleChildren params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.bToggleChildren = (bool)bToggleChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::LightComponentIsScheduled(UObject* WorldContextObject, USceneComponent* Light, bool& bIsScheduled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentIsScheduled"));
    struct Params_LightComponentIsScheduled {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        bool bIsScheduled; // 0x10
    }; // Size: 0x11
    Params_LightComponentIsScheduled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.bIsScheduled = (bool)bIsScheduled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsScheduled = params.bIsScheduled;
}
void UGlobalLightGroupsLibrary::LightComponentGetScheduleName(UObject* WorldContextObject, USceneComponent* Light, FName& ScheduleName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentGetScheduleName"));
    struct Params_LightComponentGetScheduleName {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        FName ScheduleName; // 0x10
    }; // Size: 0x18
    Params_LightComponentGetScheduleName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.ScheduleName = (FName)ScheduleName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScheduleName = params.ScheduleName;
}
void UGlobalLightGroupsLibrary::LightComponentGetHermesEvent(UObject* WorldContextObject, USceneComponent* Light, FName& HermesEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentGetHermesEvent"));
    struct Params_LightComponentGetHermesEvent {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        FName HermesEvent; // 0x10
    }; // Size: 0x18
    Params_LightComponentGetHermesEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.HermesEvent = (FName)HermesEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    HermesEvent = params.HermesEvent;
}
void UGlobalLightGroupsLibrary::LightComponentEnableHermesEvent(UObject* WorldContextObject, USceneComponent* Light, FName HermesEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentEnableHermesEvent"));
    struct Params_LightComponentEnableHermesEvent {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
        FName HermesEvent; // 0x10
    }; // Size: 0x18
    Params_LightComponentEnableHermesEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    params.HermesEvent = (FName)HermesEvent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::BindComponentVisibility(UObject* WorldContextObject, FName Region, FName Group, USceneComponent* SceneComponent, FLightGroupBoundComponentSettings Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.BindComponentVisibility"));
    struct Params_BindComponentVisibility {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        USceneComponent* SceneComponent; // 0x18
        FLightGroupBoundComponentSettings Settings; // 0x20
    }; // Size: 0x2c
    Params_BindComponentVisibility params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.Settings = (FLightGroupBoundComponentSettings)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::LightComponentDisableHermesEvent(UObject* WorldContextObject, USceneComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.LightComponentDisableHermesEvent"));
    struct Params_LightComponentDisableHermesEvent {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
    }; // Size: 0x10
    Params_LightComponentDisableHermesEvent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::HermesGetLightGroupMessageDelegateName() {}
void UGlobalLightGroupsLibrary::HermesGetLightComponentMessageDelegateName() {}
void UGlobalLightGroupsLibrary::HermesBindLightGroupMessage() {}
void UGlobalLightGroupsLibrary::GetRegionFromLocation(UObject* WorldContextObject, FVector Location, FName& Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.GetRegionFromLocation"));
    struct Params_GetRegionFromLocation {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        FName Region; // 0x14
    }; // Size: 0x1c
    Params_GetRegionFromLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.Region = (FName)Region;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Region = params.Region;
}
void UGlobalLightGroupsLibrary::GetRegionFromActor(UObject* WorldContextObject, AActor* Actor, FName& Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.GetRegionFromActor"));
    struct Params_GetRegionFromActor {
        UObject* WorldContextObject; // 0x0
        AActor* Actor; // 0x8
        FName Region; // 0x10
    }; // Size: 0x18
    Params_GetRegionFromActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Actor = (AActor*)Actor;
    params.Region = (FName)Region;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Region = params.Region;
}
void UGlobalLightGroupsLibrary::GetMyRegion(UObject* WorldContextObject, FName& Region) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.GetMyRegion"));
    struct Params_GetMyRegion {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
    }; // Size: 0x10
    Params_GetMyRegion params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Region = params.Region;
}
void UGlobalLightGroupsLibrary::GetGlobalLightGroupsMaster(UObject* WorldContextObject, AGlobalLightGroupsMaster*& GlobalLightGroupsMaster) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.GetGlobalLightGroupsMaster"));
    struct Params_GetGlobalLightGroupsMaster {
        UObject* WorldContextObject; // 0x0
        AGlobalLightGroupsMaster* GlobalLightGroupsMaster; // 0x8
    }; // Size: 0x10
    Params_GetGlobalLightGroupsMaster params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GlobalLightGroupsMaster = (AGlobalLightGroupsMaster*)GlobalLightGroupsMaster;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GlobalLightGroupsMaster = params.GlobalLightGroupsMaster;
}
void UGlobalLightGroupsLibrary::EnableLightGroupSchedule(UObject* WorldContextObject, FName Region, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.EnableLightGroupSchedule"));
    struct Params_EnableLightGroupSchedule {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
    }; // Size: 0x18
    Params_EnableLightGroupSchedule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::DisableLightGroupSchedule(UObject* WorldContextObject, FName Region, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.DisableLightGroupSchedule"));
    struct Params_DisableLightGroupSchedule {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
    }; // Size: 0x18
    Params_DisableLightGroupSchedule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::EnableLightComponentSchedule(UObject* WorldContextObject, USceneComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.EnableLightComponentSchedule"));
    struct Params_EnableLightComponentSchedule {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
    }; // Size: 0x10
    Params_EnableLightComponentSchedule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightGroupsLibrary::DisableLightComponentSchedule(UObject* WorldContextObject, USceneComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.DisableLightComponentSchedule"));
    struct Params_DisableLightComponentSchedule {
        UObject* WorldContextObject; // 0x0
        USceneComponent* Light; // 0x8
    }; // Size: 0x10
    Params_DisableLightComponentSchedule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Light = (USceneComponent*)Light;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UGlobalLightGroupsLibrary::Conv_GroupDropDownToLightComponentScheduleName(FLightComponentScheduleName LightComponentScheduleDropdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.Conv_GroupDropDownToLightComponentScheduleName"));
    struct Params_Conv_GroupDropDownToLightComponentScheduleName {
        FLightComponentScheduleName LightComponentScheduleDropdown; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_GroupDropDownToLightComponentScheduleName params{};
    params.LightComponentScheduleDropdown = (FLightComponentScheduleName)LightComponentScheduleDropdown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGlobalLightGroupsLibrary::Conv_GroupDropDownToGroupName(FGlobalLightGroupsGroupName GroupDropdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.Conv_GroupDropDownToGroupName"));
    struct Params_Conv_GroupDropDownToGroupName {
        FGlobalLightGroupsGroupName GroupDropdown; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Conv_GroupDropDownToGroupName params{};
    params.GroupDropdown = (FGlobalLightGroupsGroupName)GroupDropdown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UGlobalLightGroupsLibrary::CheckLightGroups(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask, bool& bIsOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.CheckLightGroups"));
    struct Params_CheckLightGroups {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FGlobalLightGroupsMask GroupMask; // 0x10
        bool bIsOn; // 0x18
    }; // Size: 0x19
    Params_CheckLightGroups params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.GroupMask = (FGlobalLightGroupsMask)GroupMask;
    params.bIsOn = (bool)bIsOn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsOn = params.bIsOn;
}
void UGlobalLightGroupsLibrary::BindComponentsVisibility(UObject* WorldContextObject, FName Region, FName Group, TArray<USceneComponent*>& SceneComponents, FLightGroupBoundComponentSettings Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightGroups.GlobalLightGroupsLibrary.BindComponentsVisibility"));
    struct Params_BindComponentsVisibility {
        UObject* WorldContextObject; // 0x0
        FName Region; // 0x8
        FName Group; // 0x10
        TArray<USceneComponent*> SceneComponents; // 0x18
        FLightGroupBoundComponentSettings Settings; // 0x28
    }; // Size: 0x34
    Params_BindComponentsVisibility params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Region = (FName)Region;
    params.Group = (FName)Group;
    params.SceneComponents = (TArray<USceneComponent*>)SceneComponents;
    params.Settings = (FLightGroupBoundComponentSettings)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SceneComponents = params.SceneComponents;
}
