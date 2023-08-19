#include "UCollectionsScreen.hpp"
#include "UFunction.hpp"
#include "UTabPageWidget.hpp"
UCollectionsScreen* UCollectionsScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CollectionsScreen");
    return (UCollectionsScreen*)res;
}
TArray<FName> UCollectionsScreen::GetUsedInRecipesForCollectionItem(FName CollectionItem, FName CollectionCategory, bool IncludeLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CollectionsScreen.GetUsedInRecipesForCollectionItem"));
    struct Params_GetUsedInRecipesForCollectionItem {
        FName CollectionItem; // 0x0
        FName CollectionCategory; // 0x8
        bool IncludeLocked; // 0x10
        char pad_11[0x7];
        TArray<FName> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetUsedInRecipesForCollectionItem params{};
    params.CollectionItem = (FName)CollectionItem;
    params.CollectionCategory = (FName)CollectionCategory;
    params.IncludeLocked = (bool)IncludeLocked;
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
