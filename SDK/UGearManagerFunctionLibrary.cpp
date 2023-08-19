#include "FGearItemID.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UGearManagerFunctionLibrary.hpp"
bool UGearManagerFunctionLibrary::EqualEqual_GearItemIDGearItemID(FGearItemID& arg1, FGearItemID& arg2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManagerFunctionLibrary.EqualEqual_GearItemIDGearItemID"));
    struct Params_EqualEqual_GearItemIDGearItemID {
        FGearItemID arg1; // 0x0
        FGearItemID arg2; // 0x14
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_EqualEqual_GearItemIDGearItemID params{};
    params.arg1 = (FGearItemID)arg1;
    params.arg2 = (FGearItemID)arg2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    arg1 = params.arg1;
    arg2 = params.arg2;
    return (bool)params.ReturnValue;
}
bool UGearManagerFunctionLibrary::NotEqual_GearItemIDGearItemID(FGearItemID& arg1, FGearItemID& arg) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManagerFunctionLibrary.NotEqual_GearItemIDGearItemID"));
    struct Params_NotEqual_GearItemIDGearItemID {
        FGearItemID arg1; // 0x0
        FGearItemID arg; // 0x14
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_NotEqual_GearItemIDGearItemID params{};
    params.arg1 = (FGearItemID)arg1;
    params.arg = (FGearItemID)arg;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    arg1 = params.arg1;
    arg = params.arg;
    return (bool)params.ReturnValue;
}
UGearManagerFunctionLibrary* UGearManagerFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GearManagerFunctionLibrary");
    return (UGearManagerFunctionLibrary*)res;
}
bool UGearManagerFunctionLibrary::IsValid(FGearItemID& GearItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearManagerFunctionLibrary.IsValid"));
    struct Params_IsValid {
        FGearItemID GearItemID; // 0x0
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_IsValid params{};
    params.GearItemID = (FGearItemID)GearItemID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    GearItemID = params.GearItemID;
    return (bool)params.ReturnValue;
}
