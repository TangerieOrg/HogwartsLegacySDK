#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUserListEntry.hpp"
UUserListEntry* UUserListEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UserListEntry");
    return (UUserListEntry*)res;
}
void UUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserListEntry.BP_OnItemSelectionChanged"));
    struct Params_BP_OnItemSelectionChanged {
        bool bIsSelected; // 0x0
    }; // Size: 0x1
    Params_BP_OnItemSelectionChanged params{};
    params.bIsSelected = (bool)bIsSelected;
    ProcessEvent(func, &params);
}
void UUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserListEntry.BP_OnItemExpansionChanged"));
    struct Params_BP_OnItemExpansionChanged {
        bool bIsExpanded; // 0x0
    }; // Size: 0x1
    Params_BP_OnItemExpansionChanged params{};
    params.bIsExpanded = (bool)bIsExpanded;
    ProcessEvent(func, &params);
}
void UUserListEntry::BP_OnEntryReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserListEntry.BP_OnEntryReleased"));
    struct Params_BP_OnEntryReleased {
    }; // Size: 0x0
    Params_BP_OnEntryReleased params{};
    ProcessEvent(func, &params);
}
