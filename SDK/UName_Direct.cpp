#include "UNameProvider.hpp"
#include "UName_Direct.hpp"
UName_Direct* UName_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Name_Direct");
    return (UName_Direct*)res;
}
