#include "UBrushBaseProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UBrushBaseProperties* UBrushBaseProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.BrushBaseProperties");
    return (UBrushBaseProperties*)res;
}
