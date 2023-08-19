#include "UBTCompositeNode.hpp"
#include "UBTComposite_Selector.hpp"
UBTComposite_Selector* UBTComposite_Selector::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTComposite_Selector");
    return (UBTComposite_Selector*)res;
}
