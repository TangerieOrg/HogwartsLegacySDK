#include "FColor.hpp"
#include "FNavAgentSelector.hpp"
#include "UNavArea.hpp"
#include "UNavAreaBase.hpp"
UNavArea* UNavArea::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavArea");
    return (UNavArea*)res;
}
