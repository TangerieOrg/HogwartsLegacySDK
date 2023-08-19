#include "FDelegateRuntimeBinding.hpp"
#include "UBlueprintGeneratedClass.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetBlueprintGeneratedClass.hpp"
#include "UWidgetTree.hpp"
UWidgetBlueprintGeneratedClass* UWidgetBlueprintGeneratedClass::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetBlueprintGeneratedClass");
    return (UWidgetBlueprintGeneratedClass*)res;
}
