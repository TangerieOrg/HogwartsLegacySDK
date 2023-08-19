#include "AActor.hpp"
#include "ABeaconLocation.hpp"
#include "ATargetPoint.hpp"
#include "EBeaconDisplayPriority.hpp"
#include "EBeaconType.hpp"
#include "FDbDoubleColumnInfo.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
ABeaconLocation* ABeaconLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BeaconLocation");
    return (ABeaconLocation*)res;
}
void ABeaconLocation::SetParentObject(AActor* inParentObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetParentObject"));
    struct Params_SetParentObject {
        AActor* inParentObject; // 0x0
    }; // Size: 0x8
    Params_SetParentObject params{};
    params.inParentObject = (AActor*)inParentObject;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetStartInactive(bool inStartInactive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetStartInactive"));
    struct Params_SetStartInactive {
        bool inStartInactive; // 0x0
    }; // Size: 0x1
    Params_SetStartInactive params{};
    params.inStartInactive = (bool)inStartInactive;
    ProcessEvent(func, &params);
}
bool ABeaconLocation::GetMakeDynamic() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetMakeDynamic"));
    struct Params_GetMakeDynamic {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMakeDynamic params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABeaconLocation::SetHudIconSuppressed(bool bInHudIconSuppressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetHudIconSuppressed"));
    struct Params_SetHudIconSuppressed {
        bool bInHudIconSuppressed; // 0x0
    }; // Size: 0x1
    Params_SetHudIconSuppressed params{};
    params.bInHudIconSuppressed = (bool)bInHudIconSuppressed;
    ProcessEvent(func, &params);
}
bool ABeaconLocation::GetIsSaveLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetIsSaveLocation"));
    struct Params_GetIsSaveLocation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsSaveLocation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABeaconLocation::SetActivationDistance(int32_t InDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetActivationDistance"));
    struct Params_SetActivationDistance {
        int32_t InDistance; // 0x0
    }; // Size: 0x4
    Params_SetActivationDistance params{};
    params.InDistance = (int32_t)InDistance;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetShowInWorld(bool inShowInWorld) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetShowInWorld"));
    struct Params_SetShowInWorld {
        bool inShowInWorld; // 0x0
    }; // Size: 0x1
    Params_SetShowInWorld params{};
    params.inShowInWorld = (bool)inShowInWorld;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetBeaconableObjectID(FName inNewID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetBeaconableObjectID"));
    struct Params_SetBeaconableObjectID {
        FName inNewID; // 0x0
    }; // Size: 0x8
    Params_SetBeaconableObjectID params{};
    params.inNewID = (FName)inNewID;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetMakeDynamic(bool inMakeDynamic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetMakeDynamic"));
    struct Params_SetMakeDynamic {
        bool inMakeDynamic; // 0x0
    }; // Size: 0x1
    Params_SetMakeDynamic params{};
    params.inMakeDynamic = (bool)inMakeDynamic;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetIsSaveLocation(bool isSaveLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetIsSaveLocation"));
    struct Params_SetIsSaveLocation {
        bool isSaveLocation; // 0x0
    }; // Size: 0x1
    Params_SetIsSaveLocation params{};
    params.isSaveLocation = (bool)isSaveLocation;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetHideWhenInactive(bool inHideWhenInactive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetHideWhenInactive"));
    struct Params_SetHideWhenInactive {
        bool inHideWhenInactive; // 0x0
    }; // Size: 0x1
    Params_SetHideWhenInactive params{};
    params.inHideWhenInactive = (bool)inHideWhenInactive;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetEnterExitDistance(int32_t InDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetEnterExitDistance"));
    struct Params_SetEnterExitDistance {
        int32_t InDistance; // 0x0
    }; // Size: 0x4
    Params_SetEnterExitDistance params{};
    params.InDistance = (int32_t)InDistance;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetDescriptionShort(FString inNewShortDesc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetDescriptionShort"));
    struct Params_SetDescriptionShort {
        FString inNewShortDesc; // 0x0
    }; // Size: 0x10
    Params_SetDescriptionShort params{};
    params.inNewShortDesc = (FString)inNewShortDesc;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetBeaconType(EBeaconType inBeaconType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetBeaconType"));
    struct Params_SetBeaconType {
        EBeaconType inBeaconType; // 0x0
    }; // Size: 0x1
    Params_SetBeaconType params{};
    params.inBeaconType = (EBeaconType)inBeaconType;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetBeaconPriority(EBeaconDisplayPriority InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetBeaconPriority"));
    struct Params_SetBeaconPriority {
        EBeaconDisplayPriority InPriority; // 0x0
    }; // Size: 0x1
    Params_SetBeaconPriority params{};
    params.InPriority = (EBeaconDisplayPriority)InPriority;
    ProcessEvent(func, &params);
}
void ABeaconLocation::SetBeaconName(FString inNewBeaconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetBeaconName"));
    struct Params_SetBeaconName {
        FString inNewBeaconName; // 0x0
    }; // Size: 0x10
    Params_SetBeaconName params{};
    params.inNewBeaconName = (FString)inNewBeaconName;
    ProcessEvent(func, &params);
}
bool ABeaconLocation::GetHideWhenInactive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetHideWhenInactive"));
    struct Params_GetHideWhenInactive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetHideWhenInactive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABeaconLocation::SetBeaconDebug(bool inDoDebug) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.SetBeaconDebug"));
    struct Params_SetBeaconDebug {
        bool inDoDebug; // 0x0
    }; // Size: 0x1
    Params_SetBeaconDebug params{};
    params.inDoDebug = (bool)inDoDebug;
    ProcessEvent(func, &params);
}
bool ABeaconLocation::GetStartInactive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetStartInactive"));
    struct Params_GetStartInactive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetStartInactive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ABeaconLocation::GetShowInWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetShowInWorld"));
    struct Params_GetShowInWorld {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShowInWorld params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t ABeaconLocation::GetEnterExitDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetEnterExitDistance"));
    struct Params_GetEnterExitDistance {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEnterExitDistance params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool ABeaconLocation::GetDrawDebug() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetDrawDebug"));
    struct Params_GetDrawDebug {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDrawDebug params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString ABeaconLocation::GetDescriptionShort() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetDescriptionShort"));
    struct Params_GetDescriptionShort {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDescriptionShort params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
EBeaconType ABeaconLocation::GetBeaconType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconType"));
    struct Params_GetBeaconType {
        EBeaconType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBeaconType params{};
    ProcessEvent(func, &params);
    return (EBeaconType)params.ReturnValue;
}
EBeaconDisplayPriority ABeaconLocation::GetBeaconPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconPriority"));
    struct Params_GetBeaconPriority {
        EBeaconDisplayPriority ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBeaconPriority params{};
    ProcessEvent(func, &params);
    return (EBeaconDisplayPriority)params.ReturnValue;
}
FString ABeaconLocation::GetBeaconName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconName"));
    struct Params_GetBeaconName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBeaconName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString ABeaconLocation::GetBeaconID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconID"));
    struct Params_GetBeaconID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBeaconID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FDbSingleColumnInfo ABeaconLocation::GetBeaconIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconIcon"));
    struct Params_GetBeaconIcon {
        FDbSingleColumnInfo ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetBeaconIcon params{};
    ProcessEvent(func, &params);
    return (FDbSingleColumnInfo)params.ReturnValue;
}
int32_t ABeaconLocation::GetBeaconHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconHandle"));
    struct Params_GetBeaconHandle {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBeaconHandle params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName ABeaconLocation::GetBeaconableObjectID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetBeaconableObjectID"));
    struct Params_GetBeaconableObjectID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBeaconableObjectID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t ABeaconLocation::GetActivationDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconLocation.GetActivationDistance"));
    struct Params_GetActivationDistance {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActivationDistance params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
