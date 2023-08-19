#include "UObject.hpp"
#include "USelectionSet.hpp"
USelectionSet* USelectionSet::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.SelectionSet");
    return (USelectionSet*)res;
}
