#include "AActor.hpp"
#include "ADisillusionmentSpellTool.hpp"
#include "ASpellTool.hpp"
#include "EStandardManagedPriority.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiFX2_Base.hpp"
#include "UObject.hpp"
void ADisillusionmentSpellTool::OnDisillusionmentStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentSpellTool.OnDisillusionmentStart"));
    struct Params_OnDisillusionmentStart {
    }; // Size: 0x0
    Params_OnDisillusionmentStart params{};
    ProcessEvent(func, &params);
}
ADisillusionmentSpellTool* ADisillusionmentSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DisillusionmentSpellTool");
    return (ADisillusionmentSpellTool*)res;
}
void ADisillusionmentSpellTool::OnDisillusionmentEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentSpellTool.OnDisillusionmentEnd"));
    struct Params_OnDisillusionmentEnd {
    }; // Size: 0x0
    Params_OnDisillusionmentEnd params{};
    ProcessEvent(func, &params);
}
bool ADisillusionmentSpellTool::DeactivateDisillusionment(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentSpellTool.DeactivateDisillusionment"));
    struct Params_DeactivateDisillusionment {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DeactivateDisillusionment params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ADisillusionmentSpellTool::CasterHealthZero(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentSpellTool.CasterHealthZero"));
    struct Params_CasterHealthZero {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_CasterHealthZero params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
bool ADisillusionmentSpellTool::ActivateDisillusionment(EStandardManagedPriority Priority, UObject* InInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DisillusionmentSpellTool.ActivateDisillusionment"));
    struct Params_ActivateDisillusionment {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* InInstigator; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ActivateDisillusionment params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.InInstigator = (UObject*)InInstigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
