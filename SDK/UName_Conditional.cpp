#include "UBoolProvider.hpp"
#include "UNameProvider.hpp"
#include "UName_Conditional.hpp"
UName_Conditional* UName_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Name_Conditional");
    return (UName_Conditional*)res;
}
