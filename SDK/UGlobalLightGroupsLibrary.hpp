#pragma once
#include <cstdint>
#include "EGlobalLightGroupsMaskLockState.hpp"
#include "FGlobalLightGroupsGroupName.hpp"
#include "FGlobalLightGroupsMask.hpp"
#include "FGlobalLightGroupsRegionName.hpp"
#include "FGlobalLightGroupsTimeOnOff.hpp"
#include "FLightComponentScheduleName.hpp"
#include "FLightGroupBoundComponentSettings.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class USceneComponent;
struct FLightComponentMessage;
struct FGlobalLightGroupsTimeSunOnOff;
struct FGlobalLightGroupsTimeHMSOnOff;
struct FLightGroupMessage;
class AGlobalLightGroupsMaster;
class AActor;
#pragma pack(push, 1)
class UGlobalLightGroupsLibrary : public UBlueprintFunctionLibrary {
public:
    static UGlobalLightGroupsLibrary* StaticClass();
    static void ValidLightGroup(UObject* WorldContextObject, FName Region, FName Group, bool& bValid);
    static void ValidateMyRegion(UObject* WorldContextObject, FName Region, FName& ValidRegion);
    static void UnbindComponentVisibility(UObject* WorldContextObject, FName Region, FName Group, USceneComponent* SceneComponent);
    static void UnbindComponentsVisibility(UObject* WorldContextObject, FName Region, FName Group);
    static void TurnOnLightGroups(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask);
    static void TurnOnLightGroup(UObject* WorldContextObject, FName Region, FName Group);
    static void TurnOffLightGroups(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask);
    static void TurnOffLightGroup(UObject* WorldContextObject, FName Region, FName Group);
    static void TestLightRegionAndGroup(FName RegionA, FName GroupA, FName RegionB, FName GroupB, bool& bMatch);
    static void SetLightGroupLocks(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask, EGlobalLightGroupsMaskLockState State);
    static void SetLightGroupLock(UObject* WorldContextObject, FName Region, FName Group, EGlobalLightGroupsMaskLockState State);
    static void RemoveLightComponentSchedule(UObject* WorldContextObject, USceneComponent* Light);
    static FGlobalLightGroupsMask NamesLightGroupsMask(UObject* WorldContextObject, FName Region, TArray<FName>& Groups);
    static FGlobalLightGroupsMask NameLightGroupsMask(UObject* WorldContextObject, FName Region, FName& Group);
    static FGlobalLightGroupsTimeOnOff MakeTimeOnOffSun(FGlobalLightGroupsTimeSunOnOff& SunOnOff);
    static FGlobalLightGroupsTimeOnOff MakeTimeOnOffHMS(FGlobalLightGroupsTimeHMSOnOff& TimeOnOff);
    static void LockAllLightGroups(UObject* WorldContextObject, FName Region);
    void LightGroupMessageDelegate__DelegateSignature(UObject* Caller, FLightGroupMessage& Message);
    static void LightGroupGetHermesEvent(UObject* WorldContextObject, FName Region, FName Group, FName& HermesEvent);
    static void LightGroupEnableHermesEvent(UObject* WorldContextObject, FName Region, FName Group, FName HermesEvent);
    static void LightGroupDisableHermesEvent(UObject* WorldContextObject, FName Region, FName Group);
    static void LightComponentSetSchedule(UObject* WorldContextObject, USceneComponent* Light, FName ScheduleName, bool& bSuccess, bool bToggleChildren);
    static void LightComponentScheduleToggleChildren(UObject* WorldContextObject, USceneComponent* Light, bool bToggleChildren);
    void LightComponentMessageDelegate__DelegateSignature(UObject* Caller, FLightComponentMessage& Message);
    static void LightComponentIsScheduled(UObject* WorldContextObject, USceneComponent* Light, bool& bIsScheduled);
    static void LightComponentGetScheduleName(UObject* WorldContextObject, USceneComponent* Light, FName& ScheduleName);
    static void LightComponentGetHermesEvent(UObject* WorldContextObject, USceneComponent* Light, FName& HermesEvent);
    static void LightComponentEnableHermesEvent(UObject* WorldContextObject, USceneComponent* Light, FName HermesEvent);
    static void LightComponentDisableHermesEvent(UObject* WorldContextObject, USceneComponent* Light);
    static void IsLightComponentScheduleEnabled(UObject* WorldContextObject, USceneComponent* Light, bool& bEnabled);
    static void HermesGetLightGroupMessageDelegateName();
    static void HermesGetLightComponentMessageDelegateName();
    static void HermesBindLightGroupMessage();
    static void HermesBindLightComponentMessage();
    static void GetRegionFromLocation(UObject* WorldContextObject, FVector Location, FName& Region);
    static void GetRegionFromActor(UObject* WorldContextObject, AActor* Actor, FName& Region);
    static void GetMyRegion(UObject* WorldContextObject, FName& Region);
    static void GetLightGroupLock(UObject* WorldContextObject, FName Region, FName Group, EGlobalLightGroupsMaskLockState& State);
    static void GetGlobalLightGroupsMaster(UObject* WorldContextObject, AGlobalLightGroupsMaster*& GlobalLightGroupsMaster);
    static void EnableLightGroupSchedule(UObject* WorldContextObject, FName Region, FName Group);
    static void EnableLightComponentSchedule(UObject* WorldContextObject, USceneComponent* Light);
    static void DisableLightGroupSchedule(UObject* WorldContextObject, FName Region, FName Group);
    static void DisableLightComponentSchedule(UObject* WorldContextObject, USceneComponent* Light);
    static FName Conv_RegionDropDownToRegionName(FGlobalLightGroupsRegionName RegionDropdown);
    static FName Conv_GroupDropDownToLightComponentScheduleName(FLightComponentScheduleName LightComponentScheduleDropdown);
    static FName Conv_GroupDropDownToGroupName(FGlobalLightGroupsGroupName GroupDropdown);
    static void ClearAllLightGroupLocks(UObject* WorldContextObject, FName Region);
    static void CheckLightGroups(UObject* WorldContextObject, FName Region, FGlobalLightGroupsMask GroupMask, bool& bIsOn);
    static void CheckLightGroup(UObject* WorldContextObject, FName Region, FName Group, bool& bIsOn);
    static void BindComponentVisibility(UObject* WorldContextObject, FName Region, FName Group, USceneComponent* SceneComponent, FLightGroupBoundComponentSettings Settings);
    static void BindComponentsVisibility(UObject* WorldContextObject, FName Region, FName Group, TArray<USceneComponent*>& SceneComponents, FLightGroupBoundComponentSettings Settings);
}; // Size: 0x28
#pragma pack(pop)
