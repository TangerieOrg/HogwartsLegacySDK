#include "UInteractiveToolBuilder.hpp"
#include "USingleClickToolBuilder.hpp"
USingleClickToolBuilder* USingleClickToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.SingleClickToolBuilder");
    return (USingleClickToolBuilder*)res;
}
