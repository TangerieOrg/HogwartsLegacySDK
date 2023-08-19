#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUserListEntry.hpp"
#include "UUserObjectListEntry.hpp"
UUserObjectListEntry* UUserObjectListEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UserObjectListEntry");
    return (UUserObjectListEntry*)res;
}
void UUserObjectListEntry::OnListItemObjectSet(UObject* ListItemObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UserObjectListEntry.OnListItemObjectSet"));
    struct Params_OnListItemObjectSet {
        UObject* ListItemObject; // 0x0
    }; // Size: 0x8
    Params_OnListItemObjectSet params{};
    params.ListItemObject = (UObject*)ListItemObject;
    ProcessEvent(func, &params);
}
