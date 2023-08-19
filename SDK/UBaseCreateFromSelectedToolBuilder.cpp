#include "UBaseCreateFromSelectedToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UBaseCreateFromSelectedToolBuilder* UBaseCreateFromSelectedToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder");
    return (UBaseCreateFromSelectedToolBuilder*)res;
}
