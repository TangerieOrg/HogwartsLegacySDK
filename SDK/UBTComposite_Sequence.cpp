#include "UBTCompositeNode.hpp"
#include "UBTComposite_Sequence.hpp"
UBTComposite_Sequence* UBTComposite_Sequence::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTComposite_Sequence");
    return (UBTComposite_Sequence*)res;
}
