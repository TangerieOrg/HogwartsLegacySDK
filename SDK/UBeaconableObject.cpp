#include "UBeaconableObject.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBeaconableObject* UBeaconableObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BeaconableObject");
    return (UBeaconableObject*)res;
}
FName UBeaconableObject::GetUniqueBeaconId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconableObject.GetUniqueBeaconId"));
    struct Params_GetUniqueBeaconId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUniqueBeaconId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
