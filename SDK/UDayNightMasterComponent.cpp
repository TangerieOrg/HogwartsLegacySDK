#include "ADayNightSky.hpp"
#include "FCelestialPointOfInterest.hpp"
#include "FDayNightLightRigResults.hpp"
#include "FEphemeralSkyState.hpp"
#include "FEphemerisComputer.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTimeController.hpp"
#include "FTimeDateSourceStack.hpp"
#include "UActorComponent.hpp"
#include "UDayNightLightRig.hpp"
#include "UDayNightMasterComponent.hpp"
#include "UEphemerisBasis.hpp"
#include "UEphemerisSubroutine.hpp"
#include "UFunction.hpp"
#include "UGeocentricOrbitsComponent.hpp"
#include "UObject.hpp"
void UDayNightMasterComponent::DayNightGetNormalizedTime(UObject* WorldContextObject, FSolarNormalizedTime& CurrentTime, bool& Valid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.DayNightGetNormalizedTime"));
    struct Params_DayNightGetNormalizedTime {
        UObject* WorldContextObject; // 0x0
        FSolarNormalizedTime CurrentTime; // 0x8
        bool Valid; // 0xc
    }; // Size: 0xd
    Params_DayNightGetNormalizedTime params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CurrentTime = (FSolarNormalizedTime)CurrentTime;
    params.Valid = (bool)Valid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CurrentTime = params.CurrentTime;
    Valid = params.Valid;
}
UDayNightMasterComponent* UDayNightMasterComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightMasterComponent");
    return (UDayNightMasterComponent*)res;
}
void UDayNightMasterComponent::GetDayZeroToOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.GetDayZeroToOne"));
    struct Params_GetDayZeroToOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_GetDayZeroToOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
void UDayNightMasterComponent::DayNightGetNightZeroToOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.DayNightGetNightZeroToOne"));
    struct Params_DayNightGetNightZeroToOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_DayNightGetNightZeroToOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
bool UDayNightMasterComponent::GetPointOfInterest(UObject* WorldContextObject, FName Name, FCelestialPointOfInterest& poi) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.GetPointOfInterest"));
    struct Params_GetPointOfInterest {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        FCelestialPointOfInterest poi; // 0x10
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_GetPointOfInterest params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.poi = (FCelestialPointOfInterest)poi;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    poi = params.poi;
    return (bool)params.ReturnValue;
}
void UDayNightMasterComponent::GetNightZeroDayOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.GetNightZeroDayOne"));
    struct Params_GetNightZeroDayOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_GetNightZeroDayOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
void UDayNightMasterComponent::GetNightZeroToOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.GetNightZeroToOne"));
    struct Params_GetNightZeroToOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_GetNightZeroToOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
void UDayNightMasterComponent::GetNightNegOneDayOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.GetNightNegOneDayOne"));
    struct Params_GetNightNegOneDayOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_GetNightNegOneDayOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
void UDayNightMasterComponent::GetDayNightMaster(UObject* WorldContextObject, UDayNightMasterComponent*& DayNightMaster) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.GetDayNightMaster"));
    struct Params_GetDayNightMaster {
        UObject* WorldContextObject; // 0x0
        UDayNightMasterComponent* DayNightMaster; // 0x8
    }; // Size: 0x10
    Params_GetDayNightMaster params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DayNightMaster = params.DayNightMaster;
}
void UDayNightMasterComponent::DayNightGetNightZeroDayOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.DayNightGetNightZeroDayOne"));
    struct Params_DayNightGetNightZeroDayOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_DayNightGetNightZeroDayOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
void UDayNightMasterComponent::DayNightGetNightNegOneDayOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.DayNightGetNightNegOneDayOne"));
    struct Params_DayNightGetNightNegOneDayOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_DayNightGetNightNegOneDayOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
void UDayNightMasterComponent::DayNightGetDayZeroToOne(UObject* WorldContextObject, float& DayNightValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightMasterComponent.DayNightGetDayZeroToOne"));
    struct Params_DayNightGetDayZeroToOne {
        UObject* WorldContextObject; // 0x0
        float DayNightValue; // 0x8
    }; // Size: 0xc
    Params_DayNightGetDayZeroToOne params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.DayNightValue = (float)DayNightValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DayNightValue = params.DayNightValue;
}
