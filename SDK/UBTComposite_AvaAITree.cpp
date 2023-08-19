#include "UBTCompositeNode.hpp"
#include "UBTComposite_AvaAITree.hpp"
UBTComposite_AvaAITree* UBTComposite_AvaAITree::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTComposite_AvaAITree");
    return (UBTComposite_AvaAITree*)res;
}
