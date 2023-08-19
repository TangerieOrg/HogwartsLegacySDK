#include "UNavArea.hpp"
#include "UNavAreaMeta.hpp"
UNavAreaMeta* UNavAreaMeta::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavAreaMeta");
    return (UNavAreaMeta*)res;
}
