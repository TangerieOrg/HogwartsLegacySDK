#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterInstanceHandCraftedLibrary.hpp"
UMaterialPermuterInstanceHandCraftedLibrary* UMaterialPermuterInstanceHandCraftedLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterInstanceHandCraftedLibrary");
    return (UMaterialPermuterInstanceHandCraftedLibrary*)res;
}
void UMaterialPermuterInstanceHandCraftedLibrary::Build() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterInstanceHandCraftedLibrary.Build"));
    struct Params_Build {
    }; // Size: 0x0
    Params_Build params{};
    ProcessEvent(func, &params);
}
