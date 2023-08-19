#include "UClass.hpp"
#include "UNavAreaMeta.hpp"
#include "UNavAreaMeta_SwitchByAgent.hpp"
UNavAreaMeta_SwitchByAgent* UNavAreaMeta_SwitchByAgent::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent");
    return (UNavAreaMeta_SwitchByAgent*)res;
}
