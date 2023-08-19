#include "ESpellCategory.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USpellManagerBPInterface.hpp"
void USpellManagerBPInterface::SetSpell(int32_t LoadoutIndex, int32_t SpellIndex, FName SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.SetSpell"));
    struct Params_SetSpell {
        int32_t LoadoutIndex; // 0x0
        int32_t SpellIndex; // 0x4
        FName SpellName; // 0x8
    }; // Size: 0x10
    Params_SetSpell params{};
    params.LoadoutIndex = (int32_t)LoadoutIndex;
    params.SpellIndex = (int32_t)SpellIndex;
    params.SpellName = (FName)SpellName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
USpellManagerBPInterface* USpellManagerBPInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellManagerBPInterface");
    return (USpellManagerBPInterface*)res;
}
void USpellManagerBPInterface::GetSpell(int32_t SpellLoadOut, int32_t SpellIndex, FName& SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpell"));
    struct Params_GetSpell {
        int32_t SpellLoadOut; // 0x0
        int32_t SpellIndex; // 0x4
        FName SpellName; // 0x8
    }; // Size: 0x10
    Params_GetSpell params{};
    params.SpellLoadOut = (int32_t)SpellLoadOut;
    params.SpellIndex = (int32_t)SpellIndex;
    params.SpellName = (FName)SpellName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellName = params.SpellName;
}
void USpellManagerBPInterface::SetCurrentSpellLoadoutIndex(int32_t LayoutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.SetCurrentSpellLoadoutIndex"));
    struct Params_SetCurrentSpellLoadoutIndex {
        int32_t LayoutIndex; // 0x0
    }; // Size: 0x4
    Params_SetCurrentSpellLoadoutIndex params{};
    params.LayoutIndex = (int32_t)LayoutIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USpellManagerBPInterface::SetTargetingSpell(int32_t SpellLoadoutIndex, int32_t SpellIndex, FName SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.SetTargetingSpell"));
    struct Params_SetTargetingSpell {
        int32_t SpellLoadoutIndex; // 0x0
        int32_t SpellIndex; // 0x4
        FName SpellName; // 0x8
    }; // Size: 0x10
    Params_SetTargetingSpell params{};
    params.SpellLoadoutIndex = (int32_t)SpellLoadoutIndex;
    params.SpellIndex = (int32_t)SpellIndex;
    params.SpellName = (FName)SpellName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USpellManagerBPInterface::SetFinisherSpell(FName SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.SetFinisherSpell"));
    struct Params_SetFinisherSpell {
        FName SpellName; // 0x0
    }; // Size: 0x8
    Params_SetFinisherSpell params{};
    params.SpellName = (FName)SpellName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USpellManagerBPInterface::SetSpellFinisher(FName SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.SetSpellFinisher"));
    struct Params_SetSpellFinisher {
        FName SpellName; // 0x0
    }; // Size: 0x8
    Params_SetSpellFinisher params{};
    params.SpellName = (FName)SpellName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USpellManagerBPInterface::SetOverrideSpellLevel(int32_t SpellLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.SetOverrideSpellLevel"));
    struct Params_SetOverrideSpellLevel {
        int32_t SpellLevel; // 0x0
    }; // Size: 0x4
    Params_SetOverrideSpellLevel params{};
    params.SpellLevel = (int32_t)SpellLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool USpellManagerBPInterface::IsUnlocked(FName SpellLockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.IsUnlocked"));
    struct Params_IsUnlocked {
        FName SpellLockName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsUnlocked params{};
    params.SpellLockName = (FName)SpellLockName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USpellManagerBPInterface::GetTargetingSpells(TArray<FName>& SpellNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetTargetingSpells"));
    struct Params_GetTargetingSpells {
        TArray<FName> SpellNames; // 0x0
    }; // Size: 0x10
    Params_GetTargetingSpells params{};
    params.SpellNames = (TArray<FName>)SpellNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
}
void USpellManagerBPInterface::GetSpellUpgradeMap() {}
TArray<FName> USpellManagerBPInterface::GetSpellsInCategory(ESpellCategory Category, bool IncludeLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpellsInCategory"));
    struct Params_GetSpellsInCategory {
        ESpellCategory Category; // 0x0
        bool IncludeLocked; // 0x1
        char pad_2[0x6];
        TArray<FName> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSpellsInCategory params{};
    params.Category = (ESpellCategory)Category;
    params.IncludeLocked = (bool)IncludeLocked;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool USpellManagerBPInterface::GetSpellsFinisher(TArray<FName>& SpellNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpellsFinisher"));
    struct Params_GetSpellsFinisher {
        TArray<FName> SpellNames; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetSpellsFinisher params{};
    params.SpellNames = (TArray<FName>)SpellNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
    return (bool)params.ReturnValue;
}
bool USpellManagerBPInterface::GetSpellsByGroup(int32_t LoadoutIndex, TArray<FName>& SpellNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpellsByGroup"));
    struct Params_GetSpellsByGroup {
        int32_t LoadoutIndex; // 0x0
        char pad_4[0x4];
        TArray<FName> SpellNames; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetSpellsByGroup params{};
    params.LoadoutIndex = (int32_t)LoadoutIndex;
    params.SpellNames = (TArray<FName>)SpellNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
    return (bool)params.ReturnValue;
}
TArray<FString> USpellManagerBPInterface::GetSpellGroupNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpellGroupNames"));
    struct Params_GetSpellGroupNames {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSpellGroupNames params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FName USpellManagerBPInterface::GetSpellFinisher() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpellFinisher"));
    struct Params_GetSpellFinisher {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpellFinisher params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName USpellManagerBPInterface::GetSpellCategory(FString SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetSpellCategory"));
    struct Params_GetSpellCategory {
        FString SpellName; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetSpellCategory params{};
    params.SpellName = (FString)SpellName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void USpellManagerBPInterface::GetFinishingSpells(TArray<FName>& SpellNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetFinishingSpells"));
    struct Params_GetFinishingSpells {
        TArray<FName> SpellNames; // 0x0
    }; // Size: 0x10
    Params_GetFinishingSpells params{};
    params.SpellNames = (TArray<FName>)SpellNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
}
int32_t USpellManagerBPInterface::GetCurrentSpellLoadoutIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetCurrentSpellLoadoutIndex"));
    struct Params_GetCurrentSpellLoadoutIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentSpellLoadoutIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool USpellManagerBPInterface::GetCurrentSpellLoadout(TArray<FName>& SpellNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetCurrentSpellLoadout"));
    struct Params_GetCurrentSpellLoadout {
        TArray<FName> SpellNames; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetCurrentSpellLoadout params{};
    params.SpellNames = (TArray<FName>)SpellNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
    return (bool)params.ReturnValue;
}
int32_t USpellManagerBPInterface::GetCurrentSpellIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetCurrentSpellIndex"));
    struct Params_GetCurrentSpellIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentSpellIndex params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t USpellManagerBPInterface::GetAvailableSpellCount(bool IncludeLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellManagerBPInterface.GetAvailableSpellCount"));
    struct Params_GetAvailableSpellCount {
        bool IncludeLocked; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetAvailableSpellCount params{};
    params.IncludeLocked = (bool)IncludeLocked;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
