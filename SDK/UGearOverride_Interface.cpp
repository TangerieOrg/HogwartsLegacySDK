#include "UFunction.hpp"
#include "UGearOverride_Interface.hpp"
#include "UInterface.hpp"
UGearOverride_Interface* UGearOverride_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GearOverride_Interface");
    return (UGearOverride_Interface*)res;
}
FName UGearOverride_Interface::GetBackGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetBackGear"));
    struct Params_GetBackGear {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBackGear params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGearOverride_Interface::GetHouse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetHouse"));
    struct Params_GetHouse {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHouse params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGearOverride_Interface::GetOutfitGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetOutfitGear"));
    struct Params_GetOutfitGear {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOutfitGear params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGearOverride_Interface::GetNeckGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetNeckGear"));
    struct Params_GetNeckGear {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNeckGear params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGearOverride_Interface::GetFaceGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetFaceGear"));
    struct Params_GetFaceGear {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFaceGear params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGearOverride_Interface::GetHeadGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetHeadGear"));
    struct Params_GetHeadGear {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHeadGear params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UGearOverride_Interface::GetHandGear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GearOverride_Interface.GetHandGear"));
    struct Params_GetHandGear {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHandGear params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
