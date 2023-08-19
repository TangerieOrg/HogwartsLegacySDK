#include "UBTCompositeNode.hpp"
#include "UBTComposite_Repeater.hpp"
UBTComposite_Repeater* UBTComposite_Repeater::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTComposite_Repeater");
    return (UBTComposite_Repeater*)res;
}
