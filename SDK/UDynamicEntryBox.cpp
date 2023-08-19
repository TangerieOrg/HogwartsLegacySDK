#include "UClass.hpp"
#include "UDynamicEntryBox.hpp"
#include "UDynamicEntryBoxBase.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
UDynamicEntryBox* UDynamicEntryBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.DynamicEntryBox");
    return (UDynamicEntryBox*)res;
}
UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(UClass* EntryClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass"));
    struct Params_BP_CreateEntryOfClass {
        UClass* EntryClass; // 0x0
        UUserWidget* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_BP_CreateEntryOfClass params{};
    params.EntryClass = (UClass*)EntryClass;
    ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
void UDynamicEntryBox::Reset(bool bDeleteWidgets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBox.Reset"));
    struct Params_Reset {
        bool bDeleteWidgets; // 0x0
    }; // Size: 0x1
    Params_Reset params{};
    params.bDeleteWidgets = (bool)bDeleteWidgets;
    ProcessEvent(func, &params);
}
void UDynamicEntryBox::RemoveEntry(UUserWidget* EntryWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBox.RemoveEntry"));
    struct Params_RemoveEntry {
        UUserWidget* EntryWidget; // 0x0
    }; // Size: 0x8
    Params_RemoveEntry params{};
    params.EntryWidget = (UUserWidget*)EntryWidget;
    ProcessEvent(func, &params);
}
UUserWidget* UDynamicEntryBox::BP_CreateEntry() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBox.BP_CreateEntry"));
    struct Params_BP_CreateEntry {
        UUserWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_BP_CreateEntry params{};
    ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
