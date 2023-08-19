#include "FTransfigurationResource.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UTransfigurableObjectInterface.hpp"
void UTransfigurableObjectInterface::ReactivateObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ReactivateObject"));
    struct Params_ReactivateObject {
    }; // Size: 0x0
    Params_ReactivateObject params{};
    ProcessEvent(func, &params);
}
UTransfigurableObjectInterface* UTransfigurableObjectInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurableObjectInterface");
    return (UTransfigurableObjectInterface*)res;
}
void UTransfigurableObjectInterface::ObjectVanished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectVanished"));
    struct Params_ObjectVanished {
    }; // Size: 0x0
    Params_ObjectVanished params{};
    ProcessEvent(func, &params);
}
void UTransfigurableObjectInterface::ObjectStreamedSpawnInConfirmed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectStreamedSpawnInConfirmed"));
    struct Params_ObjectStreamedSpawnInConfirmed {
    }; // Size: 0x0
    Params_ObjectStreamedSpawnInConfirmed params{};
    ProcessEvent(func, &params);
}
void UTransfigurableObjectInterface::ObjectTransformationStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectTransformationStarted"));
    struct Params_ObjectTransformationStarted {
    }; // Size: 0x0
    Params_ObjectTransformationStarted params{};
    ProcessEvent(func, &params);
}
void UTransfigurableObjectInterface::ObjectTransformationConfirmed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectTransformationConfirmed"));
    struct Params_ObjectTransformationConfirmed {
    }; // Size: 0x0
    Params_ObjectTransformationConfirmed params{};
    ProcessEvent(func, &params);
}
void UTransfigurableObjectInterface::ObjectTransformationCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectTransformationCancelled"));
    struct Params_ObjectTransformationCancelled {
    }; // Size: 0x0
    Params_ObjectTransformationCancelled params{};
    ProcessEvent(func, &params);
}
void UTransfigurableObjectInterface::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectPhysicalResponseImpact"));
    struct Params_ObjectPhysicalResponseImpact {
        float ImpactIntensity; // 0x0
        FName SpellName; // 0x4
        FName ResponseConfigName; // 0xc
        FVector ImpactLocation; // 0x14
    }; // Size: 0x20
    Params_ObjectPhysicalResponseImpact params{};
    params.ImpactIntensity = (float)ImpactIntensity;
    params.SpellName = (FName)SpellName;
    params.ResponseConfigName = (FName)ResponseConfigName;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
void UTransfigurableObjectInterface::ObjectConjured() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.ObjectConjured"));
    struct Params_ObjectConjured {
    }; // Size: 0x0
    Params_ObjectConjured params{};
    ProcessEvent(func, &params);
}
bool UTransfigurableObjectInterface::IsObjectContextValidForVanishment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.IsObjectContextValidForVanishment"));
    struct Params_IsObjectContextValidForVanishment {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectContextValidForVanishment params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTransfigurableObjectInterface::IsObjectContextValidForTransformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.IsObjectContextValidForTransformation"));
    struct Params_IsObjectContextValidForTransformation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectContextValidForTransformation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FTransfigurationResource> UTransfigurableObjectInterface::GetAdditionalItemsReturned() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.GetAdditionalItemsReturned"));
    struct Params_GetAdditionalItemsReturned {
        TArray<FTransfigurationResource> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAdditionalItemsReturned params{};
    ProcessEvent(func, &params);
    return (TArray<FTransfigurationResource>)params.ReturnValue;
}
void UTransfigurableObjectInterface::FinalizeInitialAnimationState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.FinalizeInitialAnimationState"));
    struct Params_FinalizeInitialAnimationState {
    }; // Size: 0x0
    Params_FinalizeInitialAnimationState params{};
    ProcessEvent(func, &params);
}
void UTransfigurableObjectInterface::DeactivateObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurableObjectInterface.DeactivateObject"));
    struct Params_DeactivateObject {
    }; // Size: 0x0
    Params_DeactivateObject params{};
    ProcessEvent(func, &params);
}
