#include "UBTCompositeNode.hpp"
#include "UBTComposite_RepeatUntilSuccess.hpp"
UBTComposite_RepeatUntilSuccess* UBTComposite_RepeatUntilSuccess::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTComposite_RepeatUntilSuccess");
    return (UBTComposite_RepeatUntilSuccess*)res;
}
