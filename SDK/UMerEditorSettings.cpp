#include "FLinearColor.hpp"
#include "UMerEditorSettings.hpp"
#include "UObject.hpp"
UMerEditorSettings* UMerEditorSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MerEditorSettings");
    return (UMerEditorSettings*)res;
}
